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
        cin >> n;
        vector< int> v(n+1);
        for( int i=1;i<=n;i++)
        {
            cin >> v[i];
        }
         int mxidx =1;
          for (int i = 2; i <= n; i++)
           {
        if (v[i] > v[mxidx]) 
        
        {
           mxidx = i; 
        }
    }
     cout << mxidx << endl;


   }
   return 0;
}