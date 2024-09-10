class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // check both are equal
        int n =  gas.size();
        int ans = 0;
        int track = 0;
        int curr = 0;

        for (int i=0; i<n; i++){
            // add both difference
            ans += (gas[i] - cost[i]);
            // track index 
            track += (gas[i] - cost[i]);
            if (track < 0){
                track = 0;
                // update current position
                curr = i+1;
            }
        }
        return ans < 0? -1:curr;   
    }
};
/*
    gas :
    cost : 
    if (gas == cost){
    operation continue
        ->track for each value
    }
*/