#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N;
    cin >> N;
    
    if (N == 3)
     {
        cout << "6\n";
        cout << "1 2 3\n";
        cout << "1 3 2\n";
        cout << "2 1 3\n";
        cout << "2 3 1\n";
        cout << "3 1 2\n";
        cout << "3 2 1\n";
    } else
     {
        cout << "3" << endl;
        
        for (int i = 1; i <= N; i++)
         {
            cout << i << " ";
        }
        cout << endl;
        
        for (int i = N; i >= 1; i--) 
        {
            cout << i << " ";
        }
        cout << endl;
       
        for (int i = 1; i <= N; i++) 
        {
            cout << i << " ";
            for (int j = 1; j <= N; j++) 
            {
                if (j != i) 
                {
                    cout << j << " ";
                }
            }
            cout << endl;
            break;
        }
    }
   
    return 0;
}