#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.size();
        int m = target.size();
        if (n != m) return false; 

        int i = 0, j = 0;
        while (i < n && j < m) {
            while (i < n && start[i] == '_') i++;
            while (j < m && target[j] == '_') j++;

            if (i < n && j < m) {
                if (start[i] != target[j]) return false;
                if (start[i] == 'L' && i < j) return false;
                if (start[i] == 'R' && i > j) return false;
                i++;
                j++;
            }
        }

        while (i < n && start[i] == '_') i++;
        while (j < m && target[j] == '_') j++;

        return i == n && j == m;
    }
};
