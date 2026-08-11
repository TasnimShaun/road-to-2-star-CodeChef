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
         int X, Y;
        cin >> X >> Y;
        
        int need = 50 - X;
        int minS = 2 * Y;
        int maxS = 2 * Y + 10;
        
        if (need >= minS && need <= maxS)
            cout << "Yes\n";
        else
            cout << "No\n";
    } 
   
   return 0;
}