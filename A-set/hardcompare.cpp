 #include <bits/stdc++.h> 
 using namespace std; 
 
 #define endl '\n'
  
 #define int long long 
 
 const int MOD = 1e9 + 7; 
 const int INF = LLONG_MAX >> 1; 
 
 signed main() { 
 ios::sync_with_stdio(false); cin.tie(NULL);

 double a,b,c,d;
 cin>>a>>b>>c>>d;
 if(pow(a,b) > pow(c,d)){
     cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
 } 