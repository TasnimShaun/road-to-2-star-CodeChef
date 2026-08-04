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
       vector<int > v(n);
       int maximum_days = 0;
       for(int i=0;i<n;i++)
       {
        cin >> v[i];
        maximum_days = max( maximum_days, v[i]);

       }
       int maximum = 0;
       for(int j=0;j<= maximum_days;j++)
       {
         int pro =0;
         for( int k =0;k<n;k++)
         {
            int sold = min(j, v[k]);
            pro += ( sold * 50) - ( j*30);
         }
         maximum = max(maximum,pro);
       }
       cout << maximum << endl;

    }
   
   return 0;
}