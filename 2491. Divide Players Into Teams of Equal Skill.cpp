class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        sort(skill.begin(), skill.end());

        long long sum = skill[0] + skill[n-1], chemistry = 0;
        int i = 0, j = n-1;
        
        while( i < j){
            long long tmp = skill[i] + skill[j];
            if (tmp != sum){
                return -1;
            }else{
                chemistry += skill[i] * skill[j];
            }
            i++;
            j--;
        }
        return chemistry;
    }
};