#include <bits/stdc++.h>
using namespace std;
int  main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    
    long long m, a, b, c;
    cin >> m >> a >> b >> c;
    long long row1 = min(a, m);
    long long row2 = min(b, m);
    long long remaining1 = m - row1;
    long long remaining2 = m - row2;
    row1 += min(c, remaining1);
    c -= min(c, remaining1);
    row2 += min(c, remaining2);
    cout << row1 + row2 << endl;
  }
  return 0;
}