class Solution {
public:
    int minChanges(string s) {
        int n = s.size();
        int changes = 0;

        // compare [1, 1] [2, 2] [3, 3]
        for (int i = 0; i < n; i += 2) {
            if (s[i] != s[i + 1]) {
                changes++;
            }
        }

        return changes;
    }
};
