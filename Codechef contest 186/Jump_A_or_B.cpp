#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;

        if (A == B) {
            cout << (N * A == M ? "Yes" : "No") << "\n";
        } else {
            long long num = M - N * B;
            long long den = A - B;

            if (den == 0 || num % den != 0) {
                cout << "No\n";
            } else {
                long long x = num / den;
                cout << (x >= 0 && x <= N ? "Yes" : "No") << "\n";
            }
        }
    }

    return 0;
}
