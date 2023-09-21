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
   cin>>n;

   if(n==1){
      cout<<9<<" "<<8<<endl;
   }
   else{
      cout<<3*n<<" "<<2*n<<endl;
   }

   return 0;
}