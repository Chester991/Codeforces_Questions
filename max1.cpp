#include <bits/stdc++.h>
using namespace std;

#define endl

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i =0;i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<<max;
}