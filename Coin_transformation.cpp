#include<bits/stdc++.h>
using namespace std;
long long maxCoins (long long n)
{
  int a = 0;
  while (n>3)
  {
    n /= 4;
    a++;
  }
  return 1ll<<a;
}
int main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    long long n;
    cin >> n;
    cout << maxCoins(n) << endl;
  }
   
  return 0;
}