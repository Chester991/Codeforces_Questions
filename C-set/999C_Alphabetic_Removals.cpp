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

   int n, k;
   cin >> n >> k;

   vector<char> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   for (char i = 'a'; i <= 'z'; i++)
   {
      if (k == 0)
      {
         break;
      }
      for (int j = 0; j < n; j++)
      {
         if (k == 0)
         {
            break;
         }
         if (arr[j] == i)
         {
            arr[j] = ' ';
            k--;
         }
      }
   }
   for (int i = 0; i < n; i++)
   {
      if (arr[i] != ' ')
      {
         cout<<arr[i];
      }
   }

   return 0;
}