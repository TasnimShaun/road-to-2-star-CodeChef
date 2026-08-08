#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int a,b;
    cin >> a >> b;
     int x = a*b;
     int y= min( a,b);
      cout << x -y << endl;
    return 0;
}