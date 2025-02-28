class Solution {
    public:
        int dp[1005][1005];
        int lcs(string &text1, int n, string &text2, int m) {
            // base case
            if (n==0 || m==0) return 0;
            if (dp[n][m] != -1)
                return dp[n][m];
    
            if (text1[n-1] == text2[m-1]) {
                //int ans = lcs(text1, n-1, text2, m-1);
                return dp[n][m] = 1 + lcs(text1, n-1, text2, m-1);
            }
            // if jodi last 2 ta char same na hoy
            else {
                // int ans1 = lcs(text1, n-1, text2, m);
                // int ans2 = lcs(text1, n, text2, m-1);
                return dp[n][m] = max(lcs(text1, n-1, text2, m), lcs(text1, n, text2, m-1));
            }
        }
    
        int longestCommonSubsequence(string text1, string text2) {
            int n = text1.size();
            int m = text2.size();
            memset(dp, -1, sizeof(dp));
            return lcs(text1, n, text2, m);
        }
    };