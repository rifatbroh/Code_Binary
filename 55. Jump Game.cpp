/*
    MY THINKING:

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        // if (n == 1) return true;
        // if (n == 2) return false;

        for (int i=2; i<n; i++){
            cnt++;
        }
        if (cnt != nums[1]){
            return false;
        }
        else{
            return true;
        }
        
    }
};

Accepted but Wrong ! :(
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cnt = 0;
    
        for (int i=0; i<nums.size(); i++){
            if (i > cnt){
                return false;
            }
            cnt = max(cnt, nums[i]+i);
        }
        return true;
    }
};