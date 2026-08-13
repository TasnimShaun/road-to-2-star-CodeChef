#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        
        long long sum = 0;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        long long mSum = LLONG_MAX;

        for (int i = 0; i < m; i++) {
            long long wr = arr.end() - lower_bound(arr.begin(), arr.end(), m - i);
            long long currSum = sum + 1LL * i * n - 1LL * m * wr;
            mSum = min(mSum, currSum);
        }
        cout << mSum << endl;
    }

    return 0;
}







