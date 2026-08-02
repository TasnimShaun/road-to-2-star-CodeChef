#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        bool alice = false;
        for (int a = 1; a <= K; a++)
         {
            if ((X - a <= a && Y <= a) || (Y - a <= a && X <= a)) 
            {
                alice = true;
                break;
            }
        }
        if(alice)
        {
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
    return 0;
}