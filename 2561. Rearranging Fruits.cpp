class Solution {
public:
int sum(const vector<int>& basket) {
        int total = 0;
        for (int val : basket) {
            total += val;
        }
        return total;
    }

    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        int n = basket1.size();
        int m = basket2.size();
        int cnt = 0;

        int totalSum = sum(basket1) + sum(basket2);
        if (totalSum == 0) {
            return 0;
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                swap(basket1[i], basket2[j]);
                if (sum(basket1) == sum(basket2)) {
                    return cnt++;
                }
               swap(basket1[i], basket2[j]);
            }
        }
        return -1;
    }
};