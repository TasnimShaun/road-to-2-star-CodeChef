#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int X, H;
    cin >> X >> H;
    
    int hours = (X - 4) * 24 + H;
    cout << hours << endl;
   
    return 0;
}