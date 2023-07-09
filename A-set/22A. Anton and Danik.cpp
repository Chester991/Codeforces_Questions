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

    int x;
    cin>>x;

    set<int>s;
    for(int i = 0; i <x;i++){
        int a;
        cin>>a;
        s.insert(a);
    }
    vector<int> v(s.begin(),s.end());
    sort(v.begin(),v.end());
    if(v.size() == 1){
        cout<<"NO"<<endl;
    }
    else{
        cout <<v[1]<<endl;
    }
}