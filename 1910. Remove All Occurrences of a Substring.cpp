class Solution {
    public:
        string removeOccurrences(string s, string part) {
            stack<char> st;
            string ans = "";
    
            for (char ch : s) {
                if (!st.empty() && s.find(part) ) {
                    st.pop();
                }
                else {
                    st.push(ch);
                }
            } 
    
            while(!st.empty()) {
                ans += st.top();
                st.pop();
                return ans;
            }
        }
    };