class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;
        int n = nums.size();

        vector<pair<int, int>> v; 
        for (int i = 0; i < n; i++) {
            v.emplace_back(nums[i], i); 
        }

        sort(v.begin(), v.end());
        vector<int> zero(n, 0);

        for (auto [value, idx] : v) {
            if (!zero[idx]) {
                score += value;
                zero[idx] = 1; 

                if (idx - 1 >= 0)
                    zero[idx - 1] = 1;
                if (idx + 1 < n)
                    zero[idx + 1] = 1;
            }
        }

        return score;
    }
};
