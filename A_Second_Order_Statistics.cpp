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

    int x;cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    set<int>s(v.begin(),v.end());
    vector<int>arr(s.begin(),s.end());
    sort(arr.begin(),arr.end());
    if(arr.size()==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<arr[1]<<endl;
    }
}