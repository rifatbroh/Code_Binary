class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        long long cnt = 0;

        sort(nums.begin(), nums.end());
        // for (int i=0; i<n; i++){
        //     for (int j=i+1; j<n; j++){
        //         long long x = nums[i] + nums[j];
        //         if (i>=0 && i<j && j<n && lower <= x && upper >= x){
        //             cnt++;
        //         }
        //     }
        // }

        for (int i=0; i<n; i++){
            auto up = upper_bound(nums.begin()+i+1, nums.end(), upper - nums[i]);
            auto low = lower_bound(nums.begin()+i+1, nums.end(), lower - nums[i]);

            cnt += (up - low);
        }
        return cnt;
    }
};