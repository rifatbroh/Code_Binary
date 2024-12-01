int prime(int n){
    int cnt = 0;
    if (n<2)
        return 0;

    for (int i=2; i*i<=n; i++){
        if (n%i == 0)
            return 0;
    }
    cnt++;
    return cnt;
}

class Solution {
public:
    int countPrimes(int n) {
        return prime(n);
    }
};