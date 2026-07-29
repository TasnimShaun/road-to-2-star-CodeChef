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
        set<int > s;
        vector<int > v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        
        int l= min(n,100);
       
        bool f = false;
        for(int i=0;i<l && !f;i++)
        {
            for(int j=0;j<l && !f;j++)
                {
                 int  sum = v[i] + v[j];
                    
                 if(s.find(sum) == s.end())
                    {
                     cout << v[i] << " " << v[j] << endl;
                      f= true;

                    }
                }
            }
            if(!f)
            cout << -1 <<endl;
        }
        
    
    return 0;
}