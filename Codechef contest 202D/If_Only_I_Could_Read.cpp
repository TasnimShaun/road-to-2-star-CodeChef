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
       vector< int > v(n);
       for( int i=0;i<n;i++)
       {
        cin >> v[i];
       }
       int l =-1, r = -1;
       for( int i =0; i< n-1;i++)
       {
             if( v[i] > v[i+1])
             {
                l = i+1;
                r = i+2;
                break;
             }
       }
       if( l == -1)
       {
        cout << -1 << endl;
       }
        else 
        {
            cout << l << " " << r << endl;
        }

   }
   return 0;
} 
