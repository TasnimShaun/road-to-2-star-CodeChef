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
         int N, K;
        cin >> N >> K;
        int total = N * K;
        int H = total / 60;
        int M = total % 60;
        cout << H << " " << M << endl;
   }
   return 0;
}