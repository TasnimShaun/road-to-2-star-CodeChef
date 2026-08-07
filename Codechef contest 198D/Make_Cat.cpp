#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    string s;
    cin >> s;
    sort (s.begin(),s.end());
     if( s == "act")
     {
        cout << "Yes" << endl;
     }
     else 
     {
        cout <<"No" << endl;
     }

    return 0;
}