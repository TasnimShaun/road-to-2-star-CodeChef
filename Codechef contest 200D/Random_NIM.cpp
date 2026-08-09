#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int INV2 = 499122177;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n);
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            cin >> array[i];
            if (array[i] == 1) {
                a++;
            } else if (array[i] >= 2) {
                b++;
            }
        }

        if (b == 0) {
            if (a % 2 == 1)
                cout << 1 << endl;
            else
                cout << 0 << endl;

        } else
            cout << INV2 << endl;
    }
    return 0;
}