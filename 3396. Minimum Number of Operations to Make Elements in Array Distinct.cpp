class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            bitset<101> s;
    
            for (int i=nums.size()-1; i>=0; i--) {
                if (s[nums[i]]) {
                    return (i + 3) / 3;
                }
                s[nums[i]] = 1;
            }
            return 0;
        }
    };