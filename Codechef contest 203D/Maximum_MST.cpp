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
          int N;
        cin >> N;
        int M = N * (N - 1) / 2; 
        vector<long long> W(M);
        for (int i = 0; i < M; i++) 
        cin >> W[i];
        sort(W.begin(), W.end());
        long long ans = 0;
        for (int i = M - (N - 1); i < M; i++) 
        ans += W[i];

        cout << ans << "\n";
   }
   return 0;
}