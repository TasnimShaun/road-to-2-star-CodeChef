#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        int q = N / 4;
        int r = N % 4;

        int cost = 0;
        if (r == 0) 
        {
            cost = q * 400;
        } 
        else if (r == 1)
         {
            if (q == 0) 
            cost = 200; 
            else 
            cost = (q - 1) * 400 + 500; 
        } 
        else if (r == 2) 
        {
            cost = q * 400 + 200;
        } 
        else if (r == 3)
         {
            cost = q * 400 + 300;
        }

        cout << cost << "\n";
    }
    return 0;
}


