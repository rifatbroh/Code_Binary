class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        int index = 0;
        
        for (int i : nums){
            if (mp[i] < 2){
                nums[index++] = i;
                mp[i]++;
            }
        }
        return index;
    }
};