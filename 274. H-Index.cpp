class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int count = 0;
        // if (n == 1)
        //     return 1;

        sort(citations.begin(), citations.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (citations[i] >= i + 1) {
                count = i + 1;
            }
            else{
                break;
            }
        }
        return count;
    }
};