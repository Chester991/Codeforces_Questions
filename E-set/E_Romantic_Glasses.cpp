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

      bool ans = false;
      unordered_map<int, int> mp;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      mp[0] = 1;
      int currentsum = 0;
      for (int i = 0; i < n; i++)
      {
         if (i % 2 == 0)
         {
            currentsum += arr[i];
         }
         else
         {
            currentsum -= arr[i];
         }
         if (mp.find(currentsum) != mp.end())
         {
            ans = true;
         }
         else
         {
            mp[currentsum]++;
         }
      }
      if (ans)
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