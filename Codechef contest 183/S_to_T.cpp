#include <bits/stdc++.h>
using namespace std;

int main() {
	
	  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s, tt;
        cin >> n >> s >> tt;
        
        vector<int> v;
        bool possible = true;

        for (int i = n - 1; i >= 0; i--)
         {
            if (s[i] != tt[i]) 
            {
                if (s[i - 1] == '1') 
                {
                    v.push_back(i); 
                    s[i] = (s[i] == '1') ? '0' : '1'; 
                } 
                else 
                {
                    possible = false;
                    break;
                }
            }
        }

        
        if (s[0] != tt[0])
         possible = false;

        if (!possible)
         {
            cout << -1 << endl;
        } 
        else
         {
            cout << v.size() << endl;
            for (int idx : v) 
            cout << idx << ' ';
            if (!v.empty()) 
            cout << endl;;
        }
    }
    
    return 0;

}
