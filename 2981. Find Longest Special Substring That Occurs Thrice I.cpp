class Solution {
public:
    int maximumLength(string s) {
        map<string, int> count;
        for (int i = 0; i < s.length(); i++) {
            string sub;
            for (int j = i; j < s.length(); j++) {
                if (sub.empty() || sub.back() == s[j]) {
                    sub.push_back(s[j]);
                    count[sub]++;
                } else
                    break;
            }
        }

        int ans = 0;
        for (auto i : count) {
            string str = i.first;
            if (i.second >= 3 && str.length() > ans) {
                ans = str.length();
            }
        }
        if (ans == 0)
            return -1;
        return ans;
    }
};
