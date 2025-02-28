class Solution {
    public:
        int dp[1005][1005];
    
        // Function to find LCS length
        int lcs(string &str1, int n, string &str2, int m) {
            if (n == 0 || m == 0) return 0;
            if (dp[n][m] != -1) return dp[n][m];
    
            if (str1[n - 1] == str2[m - 1]) {
                return dp[n][m] = 1 + lcs(str1, n - 1, str2, m - 1);
            } else {
                return dp[n][m] = max(lcs(str1, n - 1, str2, m), lcs(str1, n, str2, m - 1));
            }
        }
    
        string buildSCS(string &str1, int n, string &str2, int m) {
            int i = n, j = m;
            string scs = "";
    
            while (i > 0 && j > 0) {
                if (str1[i - 1] == str2[j - 1]) {
                    scs += str1[i - 1];
                    i--;
                    j--;
                } else if (dp[i - 1][j] > dp[i][j - 1]) {
                    scs += str1[i - 1];
                    i--;
                } else {
                    scs += str2[j - 1];
                    j--;
                }
            }
    
            while (i > 0) {
                scs += str1[i - 1];
                i--;
            }
            while (j > 0) {
                scs += str2[j - 1];
                j--;
            }
    
            reverse(scs.begin(), scs.end());
            return scs;
        }
    
        string shortestCommonSupersequence(string str1, string str2) {
            int n = str1.size();
            int m = str2.size();
            memset(dp, -1, sizeof(dp));
            lcs(str1, n, str2, m);
    
            return buildSCS(str1, n, str2, m);
        }
    };
    