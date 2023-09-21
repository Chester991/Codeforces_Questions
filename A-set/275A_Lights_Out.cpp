#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void change(int &a)
{
   if (a == 1)
   {
      a = 0;
   }
   else if (a == 0)
   {
      a = 1;
   }
}

signed main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   vector<vector<int>> lights(3, vector<int>(3));
   lights = {{1, 1, 1},
             {1, 1, 1},
             {1, 1, 1}};

   vector<vector<int>> pressed(3, vector<int>(3));
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         int a;
         cin >> a;
         pressed[i][j] = a % 2;
      }
   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (pressed[i][j] == 1)
         {
            change(lights[i][j]);
            if (i - 1 >= 0)
               change(lights[i - 1][j]);
            if (i + 1 < 3)
               change(lights[i + 1][j]);
            if (j - 1 >= 0)
               change(lights[i][j - 1]);
            if (j + 1 < 3)
               change(lights[i][j + 1]);
         }
      }
   }
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << lights[i][j];
      }
      cout << endl;
   }
}
