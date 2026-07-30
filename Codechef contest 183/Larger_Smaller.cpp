#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--)
   {
    int n; cin >> n;
    vector<int> v(n);
    
    int minv= 101, maxv= 0;

    for( int i=0;i<n;i++)
    {
        cin >> v[i];
       
        minv = min(minv,v[i]);
        maxv = max(maxv, v[i]);

    }
    if( maxv == minv)
    {
        cout << 0 << endl;
    }
        else {
            cout << maxv - minv -1 << endl;

    }
    
   }
    return 0;
}