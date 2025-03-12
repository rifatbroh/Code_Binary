class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int n = nums.size();
    
            int mx = 0, pos = 0, neg = 0;
            for (int i=0; i<n; i++) {
                if (nums[i] == 0) {
                    continue;
                }
                else if (nums[i] > 0) {
                    pos++;
                }
                else {
                    neg++;
                }
            }
            mx = max(pos, neg);
            return mx;
        }
    };