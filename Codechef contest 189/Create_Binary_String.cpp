#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
  double R;
    cin >> R;

    double pi = 3.141592653;
    double area = pi * R * R;

    cout << fixed << setprecision(9) << area << endl;
    return 0;
}