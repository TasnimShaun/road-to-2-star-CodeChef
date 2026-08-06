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
         for(int i=0;i<n;i++)
         {
            cin >> v[i];
         }
         vector< int > odd, even;
         for(int i=0;i<n;i++)
         {
            if(v[i] % 2 == 0)
             even.push_back(v[i]);
             else 
             odd.push_back(v[i]);
         }
         vector<int> b;
         b.insert(b.end(), odd.begin(), odd.end());
         b.insert(b.end(), even.begin(), even.end());

         int sum = 0;
        bool ok = true;
        for (int i = 0; i < n; i++)
         {
            sum += b[i];
            if (sum % 2 == 0) 
            {
                ok = false;
                break;
            }
        }
        if(!ok)
        cout << "No" << endl;
        else 
        cout <<"Yes" << endl;

    } 
   
   return 0;
}