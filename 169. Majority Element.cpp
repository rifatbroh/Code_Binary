class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int element = nums[0];
        for (auto x : mp){
            if (x.second > mp[element]){
                element = x.first;
            }
        }
        return element;
    }
};
