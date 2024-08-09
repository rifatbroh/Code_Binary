class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        vector<int> prev(sz);
        k = k% sz;

        for (int i=0; i<sz; i++){
           prev[(i+k) % sz] = nums[i];
        }
        nums = prev;
    }
};