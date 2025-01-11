class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        int cnt = 0;

        map<char, int> mp;
        for (auto ch : s){
            mp[ch]++;
        }
        for (auto [x, y] : mp){
            if (y%2 == 1){
                cnt++;
            }
        }
        if (k >= cnt && n >= k)
            return true;
        else
            return false;
    }
};