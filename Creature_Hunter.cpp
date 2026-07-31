#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n, h;
        cin >> n >> h;

        vector<pair<int, int>> weapons; 
        for (int i = 0; i <n; i++)
         {
            int s,d;
            cin >> s>> d;
            weapons.push_back({s, d});
        }
        int minTime = INT_MAX;
        for (auto weapon : weapons)
         {
            int S = weapon.first;
            int D = weapon.second;

            int hits = ( h+ D- 1) / D; 
            int timeNeeded = hits * S;

            minTime = min(minTime, timeNeeded);
        }
        pair<int, int> best1 = {0, 0}; 
        pair<int, int> best2 = {0, 0}; 
         for (auto w : weapons)
          {
            if (w.first == 1 && w.second > best1.second) 
            best1 = w;
            if (w.first == 2 && w.second > best2.second) 
            best2 = w;
        }
        for (int i = 0; i <= 1000; i++)
         {
            for (int j = 0; j <= 1000 - i; j++) 
            {
                long long totalDamage = 1LL * i * best1.second + 1LL * j * best2.second;
                if (totalDamage >= h)
                 {
                    int totalTime = i * best1.first + j * best2.first;
                    minTime = min(minTime, totalTime);
                }
            }
        }

        cout << minTime << endl;
    }

    return 0;
}
