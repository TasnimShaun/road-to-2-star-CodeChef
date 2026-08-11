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
        int N;
        cin >> N;
        
        int ans = INT_MAX; 
        for (int a = 0; a <= N/2; a++) 
        {
            int remain = N - 2*a;
            if (remain>= 0 && remain % 3 == 0) 
            {
                int b = remain / 3;
                int cost = 4*a + 5*b;
                ans = min(ans, cost);
            }
        }
        cout << ans << endl;
    } 
   
   return 0;
}