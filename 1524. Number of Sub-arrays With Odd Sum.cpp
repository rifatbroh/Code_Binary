class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
            long long cnt = 0, pref = 0;
            
            const int MOD = 1e9 + 7;
            for (int num : arr) {
                pref += num;
                cnt += pref % 2;
            }
            cnt += (arr.size() - cnt) * cnt;
            
            return cnt % MOD;
        }
    };