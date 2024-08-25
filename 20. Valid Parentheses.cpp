class Solution {
public:
    bool isValid(string s) {
        // This is most important problem
        stack<char > st;

        for (auto ch : s){
            if (ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else{
                if (st.empty()){
                    return false;
                }
                char tp = st.top();
                st.pop();
                if (ch == ')'){
                    if (tp != '('){
                        return false;
                    }
                }else if (ch == '}'){
                    if (tp != '{'){
                        return false;
                    }
                }else if (ch ==']'){
                    if (tp != '['){
                        return false;
                    }
                }
            }
        }
        if (st.empty()){
            return true;
        }else{
            return false;
        }
    }
};