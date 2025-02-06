class Solution {
public:
    int combination(int n) {
        return (n*(n-1)/2);
    }

    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;

        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                mp[nums[i]*nums[j]]++;
            }
        }
        int cnt = 0;
        for (auto [x, y] : mp) {
            cnt += 8 * combination(y);
        }
        return cnt;
    }
};