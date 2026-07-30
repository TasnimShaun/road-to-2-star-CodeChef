#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        int target_x = -1;
        bool consistent = true;

        // Step 1: Find x from known a[i] + b[i]
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                int sum = a[i] + b[i];
                if (target_x == -1) target_x = sum;
                else if (target_x != sum) {
                    consistent = false;
                    break;
                }
            }
        }

        if (!consistent) {
            cout << 0 << "\n";
            continue;
        }

        // If no known pair, then any x from 0 to 2k is possible
        if (target_x == -1) {
            int count = 0;
            for (int x = 0; x <= 2 * k; ++x) {
                bool ok = true;
                for (int i = 0; i < n; ++i) {
                    int bi = x - a[i];
                    if (bi < 0 || bi > k) {
                        ok = false;
                        break;
                    }
                }
                if (ok) count++;
            }
            cout << count << "\n";
        }
        else {
            // Step 2: For fixed x, check if all missing b[i] can be filled
            bool ok = true;
            for (int i = 0; i < n; ++i) {
                if (b[i] == -1) {
                    int bi = target_x - a[i];
                    if (bi < 0 || bi > k) {
                        ok = false;
                        break;
                    }
                }
            }
            cout << (ok ? 1 : 0) << "\n";
        }
    }

    return 0;
}
