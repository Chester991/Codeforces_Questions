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

   string str;
   cin >> str;
   for (int i = 0; i < str.length(); i++)
   {
      str[i] = tolower(str[i]);
   }

   vector<char> ans;
   for (auto i : str)
   {
      if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'||i=='y')
      {
         continue;
      }
      else
      {
         ans.push_back('.');
         ans.push_back(i);
      }
   }
   for (auto i : ans)
   {
      cout << i;
   }
}