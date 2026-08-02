#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int max_h = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max_h = max(max_h, a[i]);
        }

       
        vector<int> free(max_h + 2, 0);
        for (int i = 0; i < n; i++) {
            free[a[i]]++;
        }

       
        vector<int> sum(max_h + 2, 0);
        for (int i = max_h; i >= 0; i--) {
            sum[i] = free[i] + sum[i + 1];
        }

        int answer = INT_MAX;
        for (int x = 0; x <= max_h; x++) {
            int z = sum[x + 1]; 
            int k = x + z;
            answer = min(answer, k);
        }

        cout << answer << endl;
    }

    return 0;
}
