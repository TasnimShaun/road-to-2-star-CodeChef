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

        int minCost = INT_MAX;
        for (int i = 0; i < N; ++i) {
            int A, B;
            cin >> A >> B;
            if (A >= 7) {
                if (B < minCost) {
                    minCost = B;
                }
            }
        }

        if (minCost == INT_MAX)
            cout << -1 << endl;
        else
            cout << minCost << endl;
    }
   
   return 0;
}