#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int X;
   cin >> X;
   if (X < 15) {
        cout << 15 - X << endl;
    } else if (X == 15) {
        cout << 0 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}