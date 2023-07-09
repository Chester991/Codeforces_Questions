#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
   int n;
   cin>>n;
   queue<int>q;
   for(int i=0;i<n;i++){
      int a;
      cin>>a;
      int b;
      cin>>b;
      if(a==1){
         q.push(b);
      }
      else if(a==2){
         if(b==q.front()){
            cout<<"Yes"<<endl;
         }
         else{
            cout<<"No"<<endl;
         }
         q.pop();
      }
   }
}