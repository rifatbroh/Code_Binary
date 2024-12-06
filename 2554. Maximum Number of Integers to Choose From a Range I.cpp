class Solution {
public:
    int maxCount(vector<int>& a, int n, int maxSum) {
        set<int> s(a.begin(), a.end());
        
        long long sum = 0;
        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (s.count(i))
                continue;
            sum += i;
            if (sum > maxSum)
                break;
            cnt++;
        }

        return cnt;
    }
};