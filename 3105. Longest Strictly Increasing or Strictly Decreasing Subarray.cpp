class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int mx = 1, in = 1, dec = 1;
        
        if (n==1) return 1;
        for (int i=1; i<n; i++) {
            if (nums[i] > nums[i-1]) {
                in++;
                dec = 1;
            }
            else if (nums[i] < nums[i-1]) {
                dec++;
                in = 1;
            }
            else {
               in = dec = 1;
            }
            mx = max({mx, dec, in});
        }
        return mx;   
    }
};