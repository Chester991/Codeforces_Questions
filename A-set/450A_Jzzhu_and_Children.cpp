#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   long long n, m;
   cin >> n >> m;

   vector<long long> arr(n);
   for (long long i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   long long ans;
   deque<pair<long long, long long>> q;
   for (long long i = 0; i < n; i++)
   {
      q.push_back({arr[i], i + 1});
   }
   while (q.size() > 0)
   {
      if (q.size() == 1)
      {
         ans = q.front().second;
         break;
      }
      if ((q.front().first - m) <= 0)
      {
         q.pop_front();
      }
      else if ((q.front().first - m) > 0)
      {
         q.push_back({q.front().first - m, q.front().second});
         q.pop_front();
      }
   }
   cout << ans << endl;

   return 0;
}