class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.size();
        int p = spaces.size();
        string ans;
        int j = 0;

        for (int i=0; i<n; i++){
            if (j < p && i == spaces[j]){
                ans += ' ';
                j++;
            }
            ans += s[i];
        }
        return ans;
    }
};