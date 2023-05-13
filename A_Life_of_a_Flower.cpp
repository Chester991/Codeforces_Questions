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

    while (tc--)
    {
        int n,height=1;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == 0 && arr[i-1] == 0){
                height = -1;
                break;
            }
            else if(arr[i] == 1){
                height++;
            }
            if(arr[i] == 1 && arr[i-1] == 1){
                height=height + 4;
            }

        }
        cout<<height<<endl;
    }
}