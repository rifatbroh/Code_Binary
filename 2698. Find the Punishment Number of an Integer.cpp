class Solution {
    public:
        bool pos(int num, int x) {
            if (x < 0 || num < x) return false;
            if (num == x) return true;
            return pos(num / 10, x - num % 10) || 
                   pos(num / 100, x - num % 100) || 
                   pos(num / 1000, x - num % 1000);
        }
        int punishmentNumber(int n) {
            int sum = 0;
    
            for (int i=1; i<=n; i++) {
                int sq = i*i;
                if (pos(sq, i)) {
                    sum += sq;
                }
            }
            return sum;
        }
    };