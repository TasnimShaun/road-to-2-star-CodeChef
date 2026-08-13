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
         int N, M;
        cin >> N >> M;
        string S;
        cin >> S;

        int a = 0, b = 0;
        for (char c : S) 
        {
            if (c == '1')
             a++;
            else
             b++;
        }

        int R = N - M;
        int num = R + (b - a);

        if (num % 2 == 0)
         {
            int x = num / 2;
            if (x >= 0 && x <= R)
             {
                cout << "Yes" << endl;
                continue;
            }
        }
        cout << "No" << endl;
   }
   return 0;
}