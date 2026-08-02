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
       vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }

        int count_x =0 , count_y=0, count_z=0;

        for(int i=0;i<n;i++)
        {
            int vagshes = v[i] % 3;
            if( vagshes == 0)
            {
                count_x++;
            }
            else if(vagshes == 1)
            {
                count_y++;
            }
            else
            {
                count_z++;
            }
        }
     if(count_x > 0 || (count_y >0 && count_z>0) || (count_y >=3) || count_z >= 3)
     {
        cout << "Yes" << endl;
     }
     else{
        cout << "No" << endl;
     }

   }
   return 0;
}
