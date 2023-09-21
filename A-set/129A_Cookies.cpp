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

   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum += arr[i];
   }
   int count = 0;
   for (int i = 0; i < n; i++)
   {
      if ((sum - arr[i]) % 2 == 0)
      {
         count++;
      }
   }
   cout << count << endl;

   return 0;
}