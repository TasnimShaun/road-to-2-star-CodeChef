#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        string A;
        cin >> N >> A;

        A = " " + A;
        vector<int> prefix(N + 1, 0);
        for (int i = 1; i <= N; i++)
            prefix[i] = prefix[i - 1] + (A[i] - '0');

        auto getB = [&](int i, int j) -> int {
            if (i <= j) {
                return prefix[j] - prefix[i - 1];
            } else {
                return prefix[i] - prefix[j - 1];
            }
        };

        vector<int> dp(N + 1, 1e9);
        dp[1] = getB(1, 1);

        for (int i = 1; i <= N; i++) {
            vector<int> array(N + 1, 1e9);
            for (int j = 1; j <= N; j++) {
                if (i == 1 && j == 1) {
                    array[j] = getB(1, 1);
                    continue;
                }

                if (i > 1)
                    array[j] = min(array[j], dp[j] + getB(i, j));

                if (j > 1)
                    array[j] = min(array[j], array[j - 1] + getB(i, j));
            }

            dp = array;
        }

        cout << dp[N] << '\n';
    }

   return 0;

}
 

