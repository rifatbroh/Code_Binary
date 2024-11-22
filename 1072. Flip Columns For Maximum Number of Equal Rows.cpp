
/*
    THIS IS MY CODE
*/


// class Solution {
// public:
//     int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();
//         int flip = 0;

//         for (int i = 0; i < m; i++) {
//             vector<vector<int>> temp = matrix;
//             for (int j = 0; j < n; j++) {
//                 temp[j][i] = 1 - temp[j][i]; // Flip the column
//             }

//             int cnt = 0;
//             for (int i = 0; i < n; i++) {
//                 bool flag = true;
//                 for (int j = 1; j < m; j++) {
//                     if (temp[i][j] != temp[i][j - 1]) {
//                         flag = false;
//                         break;
//                     }
//                 }
//                 if (flag) cnt++;
//             }
//             flip = max(flip, cnt);
//         }
//         return flip;
//     }
// };


/*
    THIS IS OPTIMIZE CODE
*/

class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        map<string, int> mp;
        for (auto row : matrix){
            string tmp = "";
            for (int j=0; j<m; j++){
                tmp += (row[j] == row[0] ? '1' : '0');
            }
            mp[tmp]++;
        }
        int cnt = 0;
        for (auto i : mp){
            cnt = max(cnt, i.second);
        }
        return cnt;
    }
};