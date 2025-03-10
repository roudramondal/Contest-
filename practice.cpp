#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  char c[n + 1];
  char dami; // to avoide the newline problem that's why i use it. get the newline.
  cin >> dami;
  gets(c);
  cout<<dami << c <<endl;

  return 0;
}