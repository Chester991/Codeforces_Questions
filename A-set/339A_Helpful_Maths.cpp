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

   string str;
   cin >> str;

   unordered_map<char, int> mp;
   for (auto i : str)
   {
      if (i != '+')
      {
         mp[i - '0']++;
      }
   }
   string ans;
   while (mp[1]--)
   {
      ans+="1+";
   }
      while (mp[2]--)
   {
      ans+="2+";
   }
      while (mp[3]--)
   {
      ans+="3+";
   }
   ans.pop_back();
   cout<<ans<<endl;

   return 0;
}