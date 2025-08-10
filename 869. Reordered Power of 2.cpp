// class Solution {
// public:
//     bool reorderedPowerOf2(int n) {
//         for (int i=0; i<31; i++) {
//             if (n == pow(2, i)) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };


class Solution {
public:
    bool reorderedPowerOf2(int n) {

        string a = to_string(n);
        sort(a.begin(),a.end());

        for(int i = 0; i < 30 ; i++){

            string b = to_string(1 << i);
            sort(b.begin(), b.end());

            if(a == b) return true;
        }
        return false;
    }
};