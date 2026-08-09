#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int n, x,y;
    cin >> n >> x >> y;
     int k = y/x;
      cout << (n+k -1) /k<< endl;


    return 0;
}