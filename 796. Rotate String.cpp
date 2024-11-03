class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();

        if (n != m){
            return false;
        }
        vector<string> v;
        for (int i=0; i<n; i++){
            rotate(s.begin(), s.begin()+1, s.end());
            v.push_back(s);
        }
        for(int i=0; i<v.size(); i++){
            // if your check goal[i] this is not working
            if (v[i] == goal){
                return true;
            }
        }
        return false;
    }
};