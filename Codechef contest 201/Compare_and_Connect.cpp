#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string ans = "";

        if (N == 0) {
            // Only ">>", combine them all
            ans += "=";  // first ">>" becomes "=>"
            for (int i = 1; i < M; i++) ans += ">";
        } else if (M == 0) {
            // Only "<<"
            for (int i = 0; i < N; i++) ans += "<<";
        } else {
            // General case
            for (int i = 0; i < N; i++) ans += "<<";
            for (int i = 0; i < M; i++) ans += "><";
            if ((int)ans.size() > 0 && ans.back() == '<') ans.pop_back();
        }

        cout << ans << "\n";
    }

    return 0;
}
