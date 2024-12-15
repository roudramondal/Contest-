#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,count=0;
    cin >> n;
    for (int y = 1; y < n;y++)
    {
      int x = n - y;
      if (x>0)
      count++;
    }
    cout << count << endl;
  }
  
  return 0;
}