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
        string S;
        cin >> N >> S;
        
        bool valid = true;
        int i = 0;
        while (i < N) {

            if (S[i] == '1') 
            {
                int len = 0;

                while (i < N && S[i] == '1') 
                {
                    len++;
                    i++;
                }
                if (len < 3)
                 {
                    valid = false;
                    break;
                }
            } else 
            {
                i++;
            }
        }
        
        if(valid)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    } 
   
   return 0;
}