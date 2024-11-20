class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int> v(3, 0);
        for (char c : s){
            v[c - 'a']++;
        }

        if (*min_element(v.begin(), v.end()) < k){
            return -1;
        }

        int ans = INT_MAX;
        int l = 0;
        for (int i=0; i<s.size(); i++){
            v[s[i] - 'a']--;

            while(*min_element(v.begin(), v.end()) < k){
                v[s[l] - 'a']++;
                l++;
            }
            ans = min(ans, static_cast<int>(s.size()) - (i-l + 1));
        }
        return ans;
    }
};