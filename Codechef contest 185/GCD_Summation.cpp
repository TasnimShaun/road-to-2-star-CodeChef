#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int N, K;
    cin >> N >> K;

    if (K < N - 1) {
        cout << -1 << endl;
        return;
    }

    if (N == 1) {
        // For N=1, no adjacent pairs, so K must be 0. But problem says K is sum of GCDs of adjacent pairs.
        // Since N=1 implies no pairs, K must be 0. But constraints might not specify, but assuming N >= 2.
        cout << (K == 0 ? "1" : "-1") << endl;
        return;
    }

    int d = K - (N - 1);
    vector<int> A;

    if (d == 0) {
        for (int i = 1; i <= N; ++i) {
            A.push_back(i);
        }
    } else {
        int g = 1 + d;
        A.push_back(g);
        A.push_back(2 * g);
        int current = 2 * g + 1;
        for (int i = 2; i < N; ++i) {
            A.push_back(current);
            current += 1;
        }
    }

    // Verify all elements are distinct and within 1e9
    bool valid = true;
    for (int i = 0; i < N; ++i) {
        if (A[i] < 1 || A[i] > 1e9) {
            valid = false;
            break;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (A[i] == A[j]) {
                valid = false;
                break;
            }
        }
        if (!valid) break;
    }

    if (!valid) {
        cout << -1 << endl;
        return;
    }

    // Verify sum of GCDs
    int total = 0;
    for (int i = 0; i < N - 1; ++i) {
        total += gcd(A[i], A[i + 1]);
    }
    if (total != K) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < N; ++i) {
        cout << A[i];
        if (i != N - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
