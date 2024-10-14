class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> pq;
        for (auto i : nums) {
            pq.push(i);
        }
        
        while (k--) {
            // here top means mx value
            int val = pq.top();
            pq.pop();
            score += val;
            int modified = ceil(val / 3.0);
            pq.push(modified);
        }
        return score;
    }
};