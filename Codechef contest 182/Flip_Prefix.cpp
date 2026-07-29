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
        string s;
        cin >> n >> s;

        int z=0, o=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            z++;
            else
            o++;
            if(z==o)
            b++;
        }
        long long r = pow(2, b);
        cout << r << endl;

    }
    return 0;
}