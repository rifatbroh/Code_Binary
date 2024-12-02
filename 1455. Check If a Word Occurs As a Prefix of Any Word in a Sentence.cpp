class Solution {
public:
    int isPrefixOfWord(string s, string w) {
        // use stringstream
        int cnt = 0;
        stringstream ss(s);
        string word;

        while(ss >> word){
            // each word access and count+1;
            cnt++;
            if (word.find(w) == 0){
                return cnt;
            }
        }
        return -1;
    }
};