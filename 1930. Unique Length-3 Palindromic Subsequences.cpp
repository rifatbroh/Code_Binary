class Solution {
public:
    int unique_palindrome(string sub, string s) {
        int valid = 0;
        for (int i=0; i<s.size() && valid<3; i++){
            if (s[i] == sub[valid]){
                valid++;
            }
        }

        if (valid == 3)
            return 1;
        else
            return 0;
    }

    int countPalindromicSubsequence(string s) {
        int cnt = 0;
        for (int i='a'; i<='z'; i++){
            for (int j='a'; j<='z'; j++){
                string sub = "";
                sub += i;
                sub += j;
                sub += i;

                if (unique_palindrome(sub, s)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};