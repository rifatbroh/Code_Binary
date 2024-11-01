class Solution {
public:
    string makeFancyString(string s) {
        string res;
        for (char i : s){
            int n = res.size();
            if (n<2 || !(res[n-1] == i && res[n-2] == i)){
                res += i;
            }
        }
        return res;
    }
};