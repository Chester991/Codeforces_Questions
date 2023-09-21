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
      unordered_map<int, int> mp;
      set<int> s;
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         mp[arr[i]]++;
         s.insert(arr[i]);
      }
      int maxoccuringfreq = 0, maxoccuringele;
      for (auto i : mp)
      {
         if (i.second > maxoccuringfreq)
         {
            maxoccuringfreq = i.second;
            maxoccuringele = i.first;
         }
      }
      int team1 = s.size();
      int team2 = maxoccuringfreq;
      if (team1 > team2)
      {
         cout << team2 << endl;
      }
      else if (team1 < team2)
      {
         cout << team1 << endl;
      }
      else if (team1 == team2)
      {
         cout << team2 - 1 << endl;
      }
   }

   return 0;
}