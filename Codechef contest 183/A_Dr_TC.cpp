#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int total = 0;

        for (int i = 0; i < n; ++i) {
            string m = s; 
            m[i] = (m[i] == '0') ? '1' : '0';
            int count = 0;
            for (char ch : m) {
                if (ch == '1') {
                    count++;
                }
            }
            total += count;
        }

        cout << total << endl;
    }
    return 0;
}
