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
      int min = 0;
      for (int i = 0; i < n; i++)
      {
         if (arr[i] < arr[min])
         {
            min = i;
         }
      }
      arr[min] = arr[min] + 1;
      int multiply = 1;
      for (int i = 0; i < n; i++)
      {
         multiply = multiply * arr[i];
      }
      cout << multiply << endl;
   }

   return 0;
}