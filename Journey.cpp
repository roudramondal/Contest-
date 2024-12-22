#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  long long  count = 0;
  long long  sum = 0;
  while (t--)
  {
    long long  n, a, b, c;
    cin >> n >> a >> b >> c;
    sum = (a + b + c);
  long long full_walk = n / sum;
  long long distance_cover = full_walk * sum;
  long long day = 3 * full_walk;
  long long remaining_distance = n - distance_cover;
  if (remaining_distance>0)
    {day++;
    if (remaining_distance>a)
    {
      remaining_distance -= a;
      day++;
      if (remaining_distance > b)
    {
      remaining_distance -= b;
      day++;
    }
    
    }
    }
    cout << day << endl;
  }
  
  return 0;
}