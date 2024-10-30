class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long long rev = 0;
        long long tmp = x;

        while(tmp != 0){
            int digit = tmp % 10;
            rev = rev * 10 + digit;
            tmp /= 10;
        }
        return (rev == x);
    }
};