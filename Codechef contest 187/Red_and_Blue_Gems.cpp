#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, B, P, Q;
    cin >> R >> B >> P >> Q; 

    int redCoins = R * P;
    int blueCoins = B * Q;

    int answer = max(redCoins, blueCoins);
    cout << answer << endl;

    return 0;
}
