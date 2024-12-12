class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        while(k--){
            int mx = *max_element(gifts.begin(), gifts.end());
            
            for (int i=0; i<gifts.size(); i++){
                if (gifts[i] == mx){
                    gifts[i] = sqrt(mx);
                    break;
                }
            }
        }
        long long cnt = 0;
        for (int i=0; i<gifts.size(); i++){
            cnt += gifts[i];
        }
        return cnt;
    }
};