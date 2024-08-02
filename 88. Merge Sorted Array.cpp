// /*
//     MD Rifat 
    
//     country Bangladesh
// */

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> x(n), y(m);
//         for (int i=0; i<n; i++) cin >> x[i];
//         for (int i=0; i<m; i++) cin >> y[i];

//         int a, b;
//         cin >> a >> b;

//         sort(x.begin(), x.end());
//         sort(y.begin(), y.end());

//         // value put 
//         vector<int> merged;
//         for (int i=0; i<a; i++) merged.push_back(x[i]);
//         for (int i=0; i<b; i++) merged.push_back(y[i]);

//         sort(merged.begin(), merged.end());

//         for (int i=0; i<merged.size(); i++){
//             cout << merged[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--; k--;
            }
            else{
                nums1[k] = nums2[j];
                j--; k--;
            }
        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
};