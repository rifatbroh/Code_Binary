class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            int n = meetings.size();
            vector<int> v(days + 1, 1);
    
             for (int i = 0; i < n; i++) {
                for (int j = meetings[i][0]; j <= meetings[i][1]; j++) {
                    v[j] = 0;
                }
            }
            int cnt = 0;
            for (int i=1; i<=days; i++) {
                if (v[i] == 1) {
                    cnt++;
                }
            }
            return cnt;
        }
    };