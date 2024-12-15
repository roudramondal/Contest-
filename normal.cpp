#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a;
    cin >> a;
    string b="";
    int n = a.length() - 1;
    for (int i = n; i >=0;i--)
    {

      if (a[i]=='q')
      {
        b += 'p';
      }
      else if (a[i]=='p')
      {
        b += 'q';
      }
      else
      {
        b += 'w';
      }
    }
    cout << b << endl;
  }
  return 0;
}