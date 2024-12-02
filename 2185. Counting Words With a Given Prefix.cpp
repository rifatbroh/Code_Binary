class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        
        vector<string> v;
        for (int i=0; i<words.size(); i++){
            v.push_back(words[i]);
        }
        for (int i=0; i<v.size(); i++){
            if (v[i].find(pref) == 0){
                cnt++;
            }
        }
        return cnt ;
    }
};