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

   string str1, str2;
   cin >> str1 >> str2;

   for (int i = 0; i < str1.size(); i++)
   {
      str1[i] = tolower(str1[i]);
   }
   for (int i = 0; i < str2.size(); i++)
   {
      str2[i] = tolower(str2[i]);
   }
   if (str1 == str2)
   {
      cout << 0 << endl;
   }
   else if (str1 < str2)
   {
      cout << -1 << endl;
   }
   else if (str1 > str2)
   {
      cout << 1 << endl;
   }

   return 0;
}