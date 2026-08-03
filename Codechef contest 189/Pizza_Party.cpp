#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,m;
   cin >> n >> m;
   int total_slice = (n + 1) * 4 + m * 3;
   int pizza = (total_slice + 7) / 8; 
   cout << pizza << endl;

    return 0;
}