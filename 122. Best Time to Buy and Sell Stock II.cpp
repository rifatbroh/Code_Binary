class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int start = prices[0];
        int n = prices.size();
        for(int i = 1;i<n; i++){
            if(start < prices[i]){
                max += prices[i] - start;
            }
            start = prices[i];
        }
        return max;
    }
};

/*
    Explain:
    ========

    Dry Run 👈
Initial Setup:

max = 0 (Maximum profit initialized to 0)
start = prices[0] = 7 (Starting price is the price on the first day)
len = prices.length = 6 (Length of the prices array)
prices array = [7, 1, 5, 3, 6, 4]
The for loop iterates from i = 1 to i = 5 (since len = 6):

i = 1: prices[i] = 1

start < prices[i]? No (7 is not less than 1)
start is updated to 1.
max remains 0.
i = 2: prices[i] = 5

start < prices[i]? Yes (1 is less than 5)
max += prices[i] - start = 0 + (5 - 1) = 4.
start is updated to 5.
i = 3: prices[i] = 3

start < prices[i]? No (5 is not less than 3)
start is updated to 3.
max remains 4.
i = 4: prices[i] = 6

start < prices[i]? Yes (3 is less than 6)
max += prices[i] - start = 4 + (6 - 3) = 7.
start is updated to 6.
i = 5: prices[i] = 4

start < prices[i]? No (6 is not less than 4)
start is updated to 4.
max remains 7.
End of loop, the method returns max = 7.
*/