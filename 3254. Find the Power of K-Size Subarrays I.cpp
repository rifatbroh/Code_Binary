class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v;

        for (int i = 0; i <= n - k; i++) {
            bool isSorted = true;
            bool allSame = true;

            for (int j = i; j < i + k - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    isSorted = false;
                    break;
                }
                if (nums[j] != nums[j + 1]) {
                    allSame = false;
                }
            }

            if (isSorted && !allSame)
                // Push the maximum if sorted and not all elements are the same
                v.push_back(*max_element(nums.begin() + i, nums.begin() + i + k));
            else
                v.push_back(-1);
        }
        return v;
    }
};
