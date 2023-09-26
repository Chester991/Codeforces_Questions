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

   int n, m;
   cin >> n >> m;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   sort(arr.begin(), arr.end());

   for (int i = -m; i <= m; i++) 
   {
      if (binary_search(arr.begin(), arr.end(), i))
      {
         continue;
      }
      else
      {
         cout << i << endl;
         break;
      }
   }

   return 0;
}
