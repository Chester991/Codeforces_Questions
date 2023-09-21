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
      int mx = *max_element(arr.begin(), arr.end());
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
         if (arr[i] != mx)
         {
            sum += (mx - arr[i]);
         }
      }
      cout<<sum<<endl;

      return 0;
   }