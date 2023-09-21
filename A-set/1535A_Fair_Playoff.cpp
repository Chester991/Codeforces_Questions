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
      int a, b, c, d;
      cin >> a >> b >> c >> d;

      if (min(a, b) > max(c, d))
      {
         cout << "NO" << endl;
      }
      else if (min(c, d) > max(a, b))
      {
         cout << "NO" << endl;
      }
      else{
         cout<<"YES"<<endl;
      }
   }

   return 0;
}