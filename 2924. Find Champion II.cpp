class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        bitset<100> los;

        for (auto i : edges){
            los.set(i[1]);
        }
        int champ = -1;
        for (int i=0; i<n; i++){
            if (!los[i]){
                if (champ != -1)
                    return -1;
                champ = i;
            }
        }
        return champ;
    }
};