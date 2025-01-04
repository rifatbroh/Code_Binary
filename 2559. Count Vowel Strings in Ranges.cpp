class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int n = words.size();
        vector<int> v(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (isVowel(words[i].front()) && isVowel(words[i].back())) {
                v[i + 1] = v[i] + 1;
            } else {
                v[i + 1] = v[i];
            }
        }

        // Process queries
        vector<int> ans;
        for ( auto& query : queries) {
            int l = query[0];
            int r = query[1];
            ans.push_back(v[r + 1] - v[l]);
        }
        return ans;
    }
};
