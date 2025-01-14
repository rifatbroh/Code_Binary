class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> v;
        set<int> s;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s.find(A[i]) != s.end())
                cnt++;
            s.insert(A[i]);

            if (s.find(B[i]) != s.end())
                cnt++;
            s.insert(B[i]);

            v.push_back(cnt);
        }
        return v;
    }
};
