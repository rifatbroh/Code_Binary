class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if (n % 2 == 1) {
            return false;
        }

        stack<int> st, unlocked;

        for (int i = 0; i < n; i++) {
            if (locked[i] == '0') {
                unlocked.push(i);
            } else if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else if (!unlocked.empty()) {
                    unlocked.pop();
                } else {
                    return false;
                }
            }
        }

        while (!st.empty() && !unlocked.empty() && st.top() < unlocked.top()) {
            st.pop();
            unlocked.pop();
        }

        if (!st.empty()) {
            return false;
        }

        return true;
    }
};
