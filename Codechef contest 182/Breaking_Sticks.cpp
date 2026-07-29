#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int b =0;
        for(int i=0;i<n;i++)
        {
            int s;
            cin >> s;
            b += s-1;
        }
        cout << b << endl;
    }
    
   
    return 0;
}