#include <iostream>
using namespace std;

typedef long long ll;

void solve() {
    ll N, M;
    cin >> N >> M;
    ll total_edges = N * (N - 1) / 2;
    ll zero_edges = total_edges - M;
    ll min_edges_for_zero_mst = N - 1;
    
    if (zero_edges >= min_edges_for_zero_mst) {
        cout << 0 << '\n';
    } else {
        ll W = min_edges_for_zero_mst - zero_edges;
        cout << W << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}