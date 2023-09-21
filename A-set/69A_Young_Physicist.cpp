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
   int a, b, c;
   int sumA = 0, sumB = 0, sumC = 0;

   for (int i = 0; i < n; i++)
   {
      cin >> a >> b >> c;

      sumA += a;
      sumB += b;
      sumC += c;
   }

   if (sumA == 0 && sumB == 0 && sumC == 0)
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }

   return 0;
}