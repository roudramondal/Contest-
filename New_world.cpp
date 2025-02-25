#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, p;
    cin >> n >> k >> p;
    int operation = ceil(abs(k*1.0/p));
    if (k<-p*n||k>p*n)
    {
      cout << "-1" << endl;
    }
    else if (operation<=n)
    {
      cout << operation << endl;
    }
    else
    {
      cout << "-1" << endl;
    }
  }
  return 0;
}