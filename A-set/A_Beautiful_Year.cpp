#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;

   n++;
   while (n < 9013)
   {
      int last_digit = n % 10;
      int second_last = (n / 10) % 10;
      int third_last = (n / 100) % 10;
      int first = n / 1000;

      if (last_digit != second_last && last_digit != third_last && last_digit != first && second_last != third_last && second_last != first && third_last != first)
      {
         break;
      }
      else
      {
         n++;
      }
   }
   cout << n << endl;

   return 0;
}