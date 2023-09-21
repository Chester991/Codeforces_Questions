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

   int shops;
   cin >> shops;

   vector<int> prices(shops);
   for (int i = 0; i < shops; i++)
   {
      cin >> prices[i];
   }
   int days;
   cin >> days;
   vector<int> money(days);
   for (int i = 0; i < days; i++)
   {
      cin >> money[i];
   }
   sort(prices.begin(), prices.end());
   for (int i = 0; i < days; i++)
   {
      int count = upper_bound(prices.begin(), prices.end(), money[i]) - prices.begin();
      cout << count << endl;
   }
}