class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            int n = nums.size();
            int cnt  = 0;
            long long total = (long long)n * (n-1)/2;
    
            map<int, int> mp;
            for (int i=0; i<n; i++) {
                int val = nums[i] - i;
                total -= mp[val];
                mp[val]++;
            }
            return total;
        }
    };