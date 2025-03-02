class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            map<int, int> mp;
    
            for (auto a : nums1) {
                mp[a[0]] = a[1];
            }
            for (auto b : nums2) {
                mp[b[0]] += b[1];
            }
    
            vector<vector<int>> merge;
            for (auto it : mp) {
                merge.push_back({it.first, it.second});
            }
            return merge;
        }
    };