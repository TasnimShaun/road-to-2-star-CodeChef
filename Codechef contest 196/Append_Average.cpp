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
        long long k;
       cin >> n >> k;

       vector<long long > v(n);
       long long sum =0;
       long long x = LLONG_MAX, y = LLONG_MAX;
       for(int i =0;i<n;i++)
       {
        cin >> v[i];
        sum += v[i];
        if(v[i] < x)
        {
            y=x;
            x= v[i];

        }
        else if( v[i] < y)
        {
           
            y = v[i];
        }

       }
       double a = ( x+y) /2;
       double ans = sum + k * a;
       cout << ans << endl;
   }
   return 0;
}
