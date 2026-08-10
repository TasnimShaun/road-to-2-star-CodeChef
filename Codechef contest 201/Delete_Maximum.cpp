#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        vector<int> pos(N + 1);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            pos[A[i]] = i;
        }

        long long ans = 1;
        int l = pos[N], r = pos[N]; 
        for (int val = N - 1; val >= 1; val--) {
            int p = pos[val];
            if (p < l) l = p;
            else if (p > r) r = p;
            else {
              
                int gap = r - l + 1 - (N - val);
                ans = (ans * 1LL * gap) % MOD;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
