#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        for(int i = 0; i < N; i++) cin >> A[i];

        int ans = 0;
        for(int i = 0; i < N; i += 2) { // Alice turns: 0,2,4,...
            ans = max(ans, A[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}

