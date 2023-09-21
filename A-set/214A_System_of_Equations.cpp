#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   int n, m;
   cin >> n >> m;

   int count = 0;

   for (int i = 0; i < m + n; i++)
   {
      for (int j = 0; j < m + n; j++)
      {
         if ((pow(i, 2) + j == n) && (i + pow(j, 2) == m))
         {
            count++;
         }
      }
   }
   cout << count << endl;

   return 0;
}
