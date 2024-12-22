#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[101], b[101];
    for (int i = 0; i < n;i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n;i++)
    {
      cin >> b[i];
    }
    int max = 0;
    for (int i = 0; i < n;i++)
    {
      int gain = a[i];
      if (i<n-1)
      {
        gain -= b[i + 1];
      }
      if (gain>0)
      {
        max += gain;
      }
    }
    cout << max << endl;
  }
  return 0;
}