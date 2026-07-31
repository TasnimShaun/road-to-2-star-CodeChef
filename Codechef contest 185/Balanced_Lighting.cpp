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
       vector<int> v(n);
       int red =0, blue=0, und =0;

       for(int i=0;i<n;i++)
       {
        cin >> v[i];
        if(v[i] == 1)
         red++;
        else if( v[i] == 2) 
        blue++;
        else if (v[i]== 0)
         und++;
       }
       int d = blue + und - red;
       if (d % 2 == 0)
        {
        int x = d / 2;
        if (x >= 0 && x <= und)
         {
            cout << "Yes" << endl;
            continue;
        }
    }

    cout << "No" << endl;;

   }
   return 0;
}