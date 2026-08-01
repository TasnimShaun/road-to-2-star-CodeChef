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
        vector<int> rate(5);
        int total = 0;

        for (int i = 0; i < 5; i++) {
            cin >> rate[i];
            total += rate[i];
        }

       
        if (total >= 35) {
            cout << 0 << endl;
            continue;
        }

      
        sort(rate.begin(), rate.end());

        int coins = 0;
        for (int i = 0; i < 5 && total < 35; i++) {
            int gain = 10 - rate[i];
            total += gain;
            coins += 100;
        }

        cout << coins << endl;
    }
   
   return 0;
}