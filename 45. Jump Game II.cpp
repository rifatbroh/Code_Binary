class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, mx = 0, end = 0;
        
        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, i + nums[i]);
            
            if (i == end) {
                cnt++;
                end = mx;
            }
        }
        return cnt;
    }
};