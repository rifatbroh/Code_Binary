class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            if (nums[0] < k) return -1;
    
            int cnt = 0;
            for (int i=0; i<n; i++) {
                if (nums[i] > k) {
                    cnt++;
                    while(i+1 < n && nums[i] == nums[i+1]) {
                        i++;
                    }
                }
            }
            return cnt;
        }
    };