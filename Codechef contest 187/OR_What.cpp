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
        string s;
        cin >> s;
        vector< long long > to;
      
        long long total =0;
        int minic =0;
        for(int i=0;i<n;i++)
        {
            long long l =i;
            long long r = n-i-1;
            if(s[i] == 'L')
            {
                if(r>l)
                {
                    minic++;
                    total += r;
                    to.push_back(r-l);
                }
                else
                {
                    total += l;
                }
            }
            else
            {
                if(l>r)
                {
                    minic++;
                    to.push_back(l-r);
                    total += l;
                }
                else 
                {
                    total += r;
                }
            }
        }
        vector< long long > answer (n+1);
        for(int i=minic; i<=n;i++)
        {
            answer[i] = total;
        }
        sort(to.begin(),to.end(),greater<long long>());
        for(int i=minic-1;i>=1;i--)
        {
            total-= to.back();
            to.pop_back();
            answer[i] = total;
        }
        for(int i=1;i<=n;i++)
        {
            cout << answer[i] << " ";
        }
         cout << endl;
       

   }
   return 0;
}