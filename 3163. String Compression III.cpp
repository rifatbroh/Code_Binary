class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string comp = "";

        int i=0;
        while(i<n){
            int cnt = 0;
            char ch = word[i];
            while(i<n && cnt<9 && word[i] == ch){
                cnt++;
                i++;
            }
            comp += to_string(cnt) +ch;
        }
        return comp;
    }
};