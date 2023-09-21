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
      unordered_map<int, int> mp;
      for (auto i : arr)
      {
         mp[i]++;
      }
      int mxFreq = 0;
      int mxElement = -1;
      for (auto i : mp)
      {
         if (i.second > mxFreq)
         {
            mxFreq = i.second;
            mxElement = i.first;
         }
      }
      int ans = -1;
      for (int i = 0; i < n; i++)
      {
         if (arr[i] != mxElement)
         {
            ans = i;
            break;
         }
      }
      cout << ans + 1 << endl;
   }

   return 0;
}
