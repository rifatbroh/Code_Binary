class Solution {
public:
    vector<string> wordSubsets(vector<string>& a, vector<string>& b) {
        int Freq[26] = {0};
        int temp[26];

        for (auto word : b) {
            memset(temp, 0, sizeof temp);
            for (char ch : word) {
                temp[ch - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                Freq[i] = max(Freq[i], temp[i]);
            }
        }

        vector<string> ans;
        for (auto word : a) {
            memset(temp, 0, sizeof temp); // Reset tempCharFreq
            for (char ch : word) {
                temp[ch - 'a']++;
            }
            bool flag = true;
            for (int i = 0; i < 26; ++i) {
                if (Freq[i] > temp[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans.emplace_back(word);
            }
        }
        return ans;
    }
};