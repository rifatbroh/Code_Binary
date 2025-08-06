class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();

        bool flag = false;
        sort(fruits.begin(), fruits.end());
        sort(baskets.begin(), baskets.end());

        for (int i=0; i<n; i++) {
            if (fruits[i] >= baskets[i]) {
                flag = true;
            }
        }
        if (flag) return true;
        else return false;
    }
};