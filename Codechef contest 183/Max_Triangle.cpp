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
        int x;
        cin >> x;
        if( x<3)
        {
            cout << -1 << endl;
            continue;
        }
        long long e = x-2,  f =x-1,  g =x;
        if( e+f>g)
        {
            cout << (e +f+g) << endl;
        } 
        else 
        {
            cout << -1 << endl;
        }

    }
    return 0;
}