#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b,c;
   cin >> a >> b >> c;
   int area = a*b;
   if ( c*c == area)
   {
    cout << "Yes" << endl;
   }
   else 
    cout << "No" << endl;
    return 0;
}