class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        long long step = 0;
        long long zero = 0;

        // while(l < r){
        //     if (s[l] != s[r]){
        //         step++;
        //         swap(l, r);
        //     }
        // }
        
        for (int i=n; i>=0; i--){
            if (s[i] == '0')
                zero++;
            else if (s[i] == '1')
                step += zero;
        }
        return step;
    }
};