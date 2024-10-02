class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        int n = arr.size();
        vector<int> v = arr;
        map<int, int> mp;
        int idx = 1;

        sort(v.begin(), v.end());

        for (int i=0; i<n; i++){
            if (mp.find(v[i]) == mp.end()){
                mp[v[i]] = idx++;
            }
        }
        for (int i=0; i<n; i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};