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
       int n,c;
       cin >> n>> c;
        vector<int> v(n), b(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
         for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        map<int ,int> mp;
        for(int i=0;i<n;i++)
        {
            int x = v[i];
            int y = b[i];
            if(mp.find(x) == mp.end())
            {
                mp[x] = y;
            }
            else 
            {
                mp[x] = min(mp[x],y);
            }
        }
        vector<int> kom;
        
        for( auto it :mp)
        {
            kom.push_back(it.second);
        }
        sort(kom.begin(),kom.end());
         int maxValue = 0;
        int totalCost = 0;
        for (int i = 0; i < kom.size(); i++)
         {
            totalCost += kom[i];
            int value = c * (i + 1) - totalCost;
            maxValue = max(maxValue, value);
        }
        cout << maxValue << endl;
   }
   return 0;
}
