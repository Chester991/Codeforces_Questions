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

   if (n == 0)
   {
      cout << 1 << endl;
   }
   else if (n == 1)
   {
      cout << 5 << endl;
   }
   else
   {
      cout << 25 << endl;
   }

   return 0;
}