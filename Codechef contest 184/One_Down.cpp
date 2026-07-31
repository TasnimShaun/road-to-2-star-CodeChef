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
        string s,t;
        cin >> s;
        cin >> t;
        int one =0;
        bool pos = true;
        for( int i =0;i<n;i++)
        {
            if(s[i] == '1')
            one++;
            if(t[i] == '1')
            {
                if( one == 0)
                {
                    pos = false;
                    break;
                }
                one--;
            }
        }
        if(pos)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
   }
   return 0;
}