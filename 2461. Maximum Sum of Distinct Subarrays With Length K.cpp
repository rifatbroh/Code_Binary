class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> s;
        long long currentSum = 0, maxSum = 0;

        for (int i = 0, j = 0; j < n; ++j) {
            // Add the current element to the sliding window
            while (s.count(nums[j])) {
                s.erase(nums[i]);
                currentSum -= nums[i];
                i++;
            }

            s.insert(nums[j]);
            currentSum += nums[j];

            // Check if the window size is exactly 'k'
            if (j - i + 1 == k) {
                maxSum = max(maxSum, currentSum);
                s.erase(nums[i]);
                currentSum -= nums[i];
                i++;
            }
        }
        return maxSum;
    }
};
