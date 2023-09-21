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

   string str;
   cin >> str;

   for (int i = 0; i < n; i++)
   {
      str[i] = tolower(str[i]);
   }
   map<char, int> mp;
   for (auto i : str)
   {
      mp[i]++;
   }
   bool ans = true;
   for (char i = 'a'; i <= 'z'; i++)
   {
      if (mp[i] == 0)
      {
         ans = false;
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

   return 0;
}