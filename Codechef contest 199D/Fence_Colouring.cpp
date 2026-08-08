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
       int n;
       cin  >> n;
       vector< int> v(n);
        map < int , int> mp;
        int maxx=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
             mp[v[i]]++;
               maxx = max( maxx, mp[v[i]]);
        } 
        int ans = min( n- maxx +1, n-mp[1]);
        cout << ans << endl;
       
   }
   return 0;
}