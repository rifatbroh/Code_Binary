class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        map<char, int> mp;

        int cnt = 0;
        for (auto ch : s){
            mp[ch]++;
        }
        for (auto [x, y] : mp){
            if (y%2 == 1){
                cnt += 1;
            }
            else{
                cnt += 2;
            }
        }
        return cnt;
    }
};