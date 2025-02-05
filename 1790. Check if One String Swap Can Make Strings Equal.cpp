class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s2.size();
        if (s1 == s2)
            return true;

        bool flag = false;
        // first step

        // for (int i=0; i<n; i++) {
        //     swap(s2[i], s2[n-1]);
        //     if (s1 == s2) {
        //         flag = true;
        //         break;
        //     }
        // }

        // second step
        
        // for (int i=1; i<=n; i++) {
        //     for (int j=n; j>=1; j--) {
        //         swap(s2[i], s2[j]);
        //         if (s1 == s2) {
        //             flag = true;
        //             break;
        //         }
        //     }
        // }

        // third step
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                swap(s2[i], s2[j]);
                if (s1 == s2) {
                    flag = true;
                    break;
                }
                swap(s2[i], s2[j]);
            }
        }
        if (flag)
            return true;
        else
            return false;
    }
};