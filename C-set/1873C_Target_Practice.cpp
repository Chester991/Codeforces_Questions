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
      char grid[10][10];
      for (int i = 0; i < 10; i++)
      {
         for (int j = 0; j < 10; j++)
         {
            cin >> grid[i][j];
         }
      }

      int score = 0;

      for (int i = 0; i < 10; i++)
      {
         for (int j = 0; j < 10; j++)
         {
            if (grid[i][j] == 'X')
            {
               if (i == 0 || i == 9 || j == 0 || j == 9)
               {
                  score += 1;
               }
               else if (i == 1 || i == 8 || j == 1 || j == 8)
               {
                  score += 2;
               }
               else if (i == 2 || i == 7 || j == 2 || j == 7)
               {
                  score += 3;
               }
               else if (i == 3 || i == 6 || j == 3 || j == 6)
               {
                  score += 4;
               }
               else if (i == 4 || i == 5 || j == 4 || j == 5)
               {
                  score += 5;
               }
            }
         }
      }

      cout << score << endl;
   }
}