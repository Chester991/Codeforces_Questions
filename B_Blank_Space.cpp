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

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin>>n;
        int curr_space=0,long_space=0;
        char arr1[n];
        for(int i=0; i<n; i++){
            cin>>arr1[i];
        }
        for(int i=0; i<n; i++){
            if(arr1[i]=='0'){
                curr_space++;
                long_space = max(long_space,curr_space);
            }
            else if(arr1[i]=='1'){
                curr_space=0;
            }
        }
        cout<<long_space<<endl;
    }
}