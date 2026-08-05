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
        cin >> n >> c;
        vector<int> v(n);
        for(int i =0;i<n;i++)
        {
            cin >> v[i];
        }
        set<int> st(v.begin(),v.end());
        int more =0;
        int ali = c;
        while(1)
        {
            bool smll = false;
            bool equal = false;
            for( int i=0;i<n;i++)
            {
                if( v[i] < ali)
                {
                    smll = true;
                }
                if(v[i] == ali)
                {
                    equal = true;
                }
            }
            if( smll && !equal)
            {
                break;
            }
            ali++;
            more++;
        
        }
        cout << more << endl;

   }
   
   return 0;
}