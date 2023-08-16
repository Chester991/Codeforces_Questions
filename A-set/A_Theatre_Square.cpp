#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n, m, a;
   cin >> n >> m >> a;

   long long side = (n / a);
   if (n % a != 0)
   {
      side++;
   }
   long long wide = (m / a);
   if (m % a != 0)
   {
      wide++;
   }

   cout << side * wide << endl;

   return 0;
}