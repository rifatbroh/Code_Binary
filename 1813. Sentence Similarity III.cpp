// Overlapping Approach
class Solution {
private:
    vector<string> convert(string sentence){
        sentence += " ";
        vector<string> ans;

        string word = "";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                ans.push_back(word);
                word="";
            }
            else{
                word += sentence[i];
            }
        }

        return ans;
    }
public:
    bool areSentencesSimilar(string x, string y) {
        // we want x to always be longest to avoid else-if conditions
        if (x.length() < y.length()) {
            swap(x, y);
        }

        // first store the words from sentences
        vector<string> vx, vy;
        vx = convert(x);
        vy = convert(y);

        int l = 0;
        // we will try to match words from prefix part
        for(int i = 0; i < vy.size(); i++) {
            if(vx[i] == vy[i]) {
                l++;
            }
            else {
                break;
            }
        }

        int ind = vx.size() - 1, r=vy.size();
        // we will try to match words from suffix part
        for(int i=vy.size()-1; i>=0; i--){
            if(vy[i] == vx[ind]){
                ind--;
                r=i;
            }
            else{
                break;
            }
        }

        // if they overlaps
        return r <= l;
    }
};


/*
    here is my thinking : 


*/

// class Solution {
// public:
//     bool areSentencesSimilar(string s1, string s2) {
//         int n1 = s1.size();
//         int n2 = s2.size();
//         int i = 0;
//         int j = n2 - 1;

//         if (n1 < n2)
//             return false;
            
//         while(i<j){
//             if (s2[i] != s2[j]){
//                 i++;
//                 j--;
//             }
//             return true;
//         }
//         return false;
//     }
// };