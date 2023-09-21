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

   string a,b;
   cin>>a>>b;

   reverse(a.begin(),a.end());
   if(a==b){
      cout<<"YES"<<endl;
   }
   else{
      cout<<"NO"<<endl;
   }

   return 0;
}