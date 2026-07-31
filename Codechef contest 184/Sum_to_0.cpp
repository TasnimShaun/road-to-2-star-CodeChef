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

      if (N % 2 != 0) {
          cout << -1 << endl;
      } else {
          vector<int> result;

          for (int i = 0; i < N / 2; ++i) {
              if (i % 3 == 0) {
                  result.push_back(1);
                  result.push_back(-1);
              } else if (i % 3 == 1) {
                  result.push_back(2);
                  result.push_back(-2);
              } else {
                  result.push_back(3);
                  result.push_back(-3);
              }
          }

          for (int i = 0; i < N; ++i) {
              cout << result[i] << " ";
          }
          cout << endl;
      } 
   }
   return 0;
}