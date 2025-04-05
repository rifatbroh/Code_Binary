class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            int totalXor = 0;
            for (int num : nums) {
                totalXor |= num;
            }
            return totalXor * (1 << (nums.size() - 1));
        }
    };