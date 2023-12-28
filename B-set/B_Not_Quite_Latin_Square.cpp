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
      char grid[3][3];
      unordered_map<char, int> mp;
      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {
            cin >> grid[i][j];
            mp[grid[i][j]]++;
         }
      }
      for (auto i : mp)
      {
         if (i.second == 2)
         {
            cout << i.first << endl;
         }
      }
   }

   return 0;
}
