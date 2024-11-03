class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        stringstream ss(sentence);
        string word;
        vector<string> v;
        
        while(ss >> word) {
            v.push_back(word);
        }
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i].back() != v[i + 1].front()) {
                return false;
            }
        }
        if (v.back().back() != v.front().front()) {
            return false;
        }
        return true;
    }
};
