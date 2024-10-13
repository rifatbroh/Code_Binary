class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> a, b;
        for (auto x : intervals){
            a.push_back(x[0]);
            b.push_back(x[1]);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        // two pointer approach

        int i=0, j=0, group=0, ans = 0;
        while(i <intervals.size()){
            if (a[i] <= b[j]){
                group++;
                i++;
            }
            else{
                group--;
                j++;
            }
            ans = max(ans, group);
        }
        return ans;
    }
};