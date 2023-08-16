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

      int n;
      cin >> n;

      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      int odd_cnt = 0;
      for (int i = 0; i < n; i++)
      {
         if ((arr[i] % 2) != 0)
         {
            odd_cnt++;
         }
      }
      if (odd_cnt % 2 == 0)
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}