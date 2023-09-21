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
      vector<char> arr(n);
      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }
      bool ans = true;
      vector<char> visited;
      int curr = 0, prev = 0;
      for (int i = 0; i < n; i++)
      {
         if (arr[curr] == arr[prev])
         {
            curr++;
         }
         else
         {
            visited.push_back(arr[prev]);
            prev = curr;
         }
         auto it = find(visited.begin(), visited.end(), arr[i]);
         if (it != visited.end())
         {
            ans = false;
            break;
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