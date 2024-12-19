class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int sum = 0, cnt = 0;
        vector<int> a, b;

        for (int i=0; i<n; i++){
            int ans = i * (i+1)/2;
            b.push_back(ans);

            sum += arr[i];
            a.push_back(sum);
        }
        sort(b.begin(), b.end());
        
        for (int i=0; i<n; i++){
            if (a[i] == b[i]){
                cnt++;
            }
        }
        return cnt ;
    }
};