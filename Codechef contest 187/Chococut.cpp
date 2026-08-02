#include <bits/stdc++.h>
using namespace std;


int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
     {
        int n, m, k;
        cin >> n >> m >> k;
        int total = n * m;
        int max_ali = 0;

        if (k == 0)
         {
           
            cout << total <<"\n";
            continue;
        }

        if (k > total) {
            cout << "0\n";
            continue;
        }

        
        for (int i = 1; i < n; i++)
         {
            int piece1 = i * m;
            int piece2 = (n - i) * m;
            if (piece1 >= k)
             {
                max_ali = max(max_ali, piece2);
            }
            if (piece2 >= k)
             {
                max_ali = max(max_ali, piece1);
            }
        }

       
        for (int j = 1; j < m; j++)
         {
            int piece1 = n * j;
            int piece2 = n * (m - j);
            if (piece1 >= k) {
                max_ali = max(max_ali, piece2);
            }
            if (piece2 >= k) {
                max_ali = max(max_ali, piece1);
            }
        }

        cout << max_ali << '\n';
    }
    return 0;
}