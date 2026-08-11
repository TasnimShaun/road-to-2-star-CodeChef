#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int R, B;
    cin >> R >> B;

    int x = min(R, B);               
    int s = R + 2 * B + 2 * x;
    cout << s << endl;
   
    return 0;
}