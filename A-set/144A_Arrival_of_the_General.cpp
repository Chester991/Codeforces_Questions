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
   int maxIndex = n - 1;
   for (int i = n - 2; i >= 0; i--)
   {
      if (arr[i] >= arr[i + 1])
      {
         maxIndex = i;
      }
   }
   int minIndex = 0;
   for (int i = 1; i < n; i++)
   {
      if (arr[i] <= arr[i - 1])
      {
         minIndex = i;
      }
   }
   int total = maxIndex + (n - 1 - minIndex);
   if (minIndex <= maxIndex)
   {
      cout << total - 1 << endl;
   }
   else
   {
      cout << total << endl;
   }

   return 0;
}