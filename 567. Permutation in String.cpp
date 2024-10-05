class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) 
            return false;
        
        vector<int> freq_1(26, 0), freq_2(26, 0);
        
        for (char c : s1){
            freq_1[c - 'a']++;
        }
        
        // Sliding window on s2
        for (int i = 0; i < s2.size(); i++) {
            freq_2[s2[i] - 'a']++;
            
            if (i >= s1.size())
                freq_2[s2[i - s1.size()] - 'a']--;
            
            if (freq_1 == freq_2)
                return true;
        }
        
        return false;
    }
};
