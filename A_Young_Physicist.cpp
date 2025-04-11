/*
    MD Rifat 
    
    country Bangladesh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, z, a, b, c;
    cin >> n >> x >> y >> z;
    for (int i=0; i<n-1; i++)
    {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    cout << ( ! (x || y || z) ? "YES" : "NO") << endl;
    return 0;
}