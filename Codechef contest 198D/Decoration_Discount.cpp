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
       for(int i = 0; i < n; i++)
       {
           cin >> v[i];
       }

       int min_cost = INT_MAX;

       for(int i = 0; i < n - 1; i++)
       {
           
           int c1 = v[i] + v[i + 1] / 2;
           min_cost = min(min_cost, c1);
       }

       
       vector<int> a = v;
       sort(a.begin(), a.end());
       int no_discount = a[0] + a[1];

       int final_cost = min(min_cost, no_discount);
       cout << final_cost << endl;
   }

   return 0;
}
