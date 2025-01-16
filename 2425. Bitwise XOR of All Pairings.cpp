class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        // vector<int> nums3;

        // for (int i=0; i<n; i++) {
        //     for (int j=0; j<m; j++) {
        //         nums3.push_back(nums1[i] ^ nums2[j]);
        //     }
        // }
        // int xo = 0;
        // for (auto x : nums3){
        //     xo ^= x;
        // }
        // return xo;

        int x=0, y=0;
        if (n%2 != 0){
            for (auto i : nums2)
                x ^= i;
        }
        if (m%2 != 0)
            for (auto i : nums1)
                y ^= i;

        return x ^ y;
    }
};