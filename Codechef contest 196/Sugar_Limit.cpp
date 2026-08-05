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
      vector<int>  b(n);
      for(int i=0;i<n;i++)
      {
        cin >> v[i];
      }
      for(int i=0;i<n;i++)
      {
       cin >>  b[i];
      }
      int maximum = 0;
      for(int i=0;i<n;i++)
      {
        int x= b[i];
        int total =0;
        for(int j=0;j<n;j++)
        {
            if( b[j] <= x && v[j] >0)
            {
                total += v[j];
            }
        }
       int  m = total -x;
        maximum = max(maximum, m);
      }
      cout << maximum << endl;

   }
   return 0;
}

