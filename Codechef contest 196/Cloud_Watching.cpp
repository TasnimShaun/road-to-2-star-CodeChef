#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a, b;
   cin >> a >> b;
   if( b >= a*3)
   {
    cout << "Rain" << endl;
   }
   else 
   {
    cout <<"Dry" << endl;
   }
    return 0;
}