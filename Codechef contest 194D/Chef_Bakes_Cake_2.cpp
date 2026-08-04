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
        vector<int> v(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
         for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
         int cost= 0;
         for(int i=0;i<n;i++)
         {
            if(b[i] < v[i] )
            {
                cost += (v[i] - b[i]);
            }
         }
         cout <<  cost << endl;
         


   }
   return 0;
}