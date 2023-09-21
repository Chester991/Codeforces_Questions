#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int tc;
   cin >> tc;

   while (tc--)
   {
      string str;
      cin >> str;

      int size = str.length() - 2;

      if (str.length() <= 10)
      {
         cout << str << endl;
      }
      else
      {
         cout << str[0] << size << str[str.length() - 1] << endl;
      }
   }

   return 0;
}
