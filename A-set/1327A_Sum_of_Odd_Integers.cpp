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

   int tc;
   cin >> tc;
   while (tc--)
   {
      int n, k;
      cin >> n >> k;
      if (n % 2 != 0 && k == 1)
      {
         cout << "YES" << endl;
         continue;
      }
      else if (n % 2 != 0 && k > 1)
      {
         cout << "NO" << endl;
         continue;
      }
      else{
            
      }
   }

   return 0;
}