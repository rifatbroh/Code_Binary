class Solution {
public:
    bool isPrefix(string word, string s) {
        int m = s.size();
        return word.substr(0, m) == s;
    }

    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for (string word : words){
            if(isPrefix(word, pref)){
                cnt++;
            } 
        }
        return cnt;
    }
};