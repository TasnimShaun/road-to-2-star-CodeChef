#include<bits/stdc++.h>
using namespace std;




int matrix(int x,int y,vector<vector<int>>& v)
{
    int c1=0,c2=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            int p1= (i+j) %2;
            int p2 = 1-(i+j)%2;
            if(v[i][j] !=p1)
             {
                c1++;
             }
             if(v[i][j] !=p2)
             {
                c2++;
             }
        }
    }
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
    cin >> t;
    while(t--)
    {
        int n,m;
         cin >> n >> m;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin >> v[i][j];
        }
        cout << matrix(n,m,v) << endl;
        
    }
    return 0;
}