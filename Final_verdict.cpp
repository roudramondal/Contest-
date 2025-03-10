#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int sum = 0;
        int a;
        for (int i = 0; i < n;i++)
        {
         
          cin >> a;
        }
        for (int i = 0; i < n;i++)
        {
          sum += a;
        }
        if (sum==n*x)
        {
          cout << "Yes" << endl;
        }
        else{
          cout << "NO" << endl;
        }
    }
    return 0;
}
