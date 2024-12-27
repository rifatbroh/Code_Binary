class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        // int mx = 0, ans = 0;

        // for (int i=0; i<n; i++){
        //     for (int j=i+1; j<n; j++){
        //         if (i<j){
        //             ans = values[i] + values[j] + i - j;
        //         }
        //         mx = max(mx, ans);
        //     }  
        // }

        int left = values[0] + 0;
        int mx = 0;

        for (int i=1; i<n; i++){
            mx = max(mx, left+values[i]-i);
            left = max(left, values[i]+i);
        }
        return mx;
    }
};