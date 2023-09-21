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

   if (n == 1)
   {
      cout << 0 << " " << 0 << " " << 1 << endl;
   }
   else if (n == 2)
   {
      cout << 0 << " " << 1 << " " << 1 << endl;
   }
   else
   {
      vector<int> fibonacci(46, 0);
      fibonacci[0] = 0;
      fibonacci[1] = 1;
      int a = 0;
      int b = 0;
      for (int i = 2; i < 46; i++)
      {
         fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
         if (fibonacci[i] == n)
         {
            a = i - 3;
            b = i - 2;
            break;
         }
      }
      cout << fibonacci[b] << " " << fibonacci[b] << " " << fibonacci[a] << endl;
   }

   return 0;
}
