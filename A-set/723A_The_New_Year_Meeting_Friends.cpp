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

   vector<int> arr(3);
   for (int i = 0; i < 3; i++)
   {
      cin >> arr[i];
   }
   sort(arr.begin(),arr.end());
   cout<<(arr[1] - arr[0]) + (arr[2]-arr[1])<<endl;

   return 0;
}