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
    int count1, count0, flag0, flag1;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] = 1)
        {
            count1++;
            count0 = 0;
            if (count1 >= 7){
                break;
            }
                
        }
        else if (str[i] = 0)
        {
            count0++;
            count1 = 0;
            if(count0 >= 7){
                break;
            }
        }
    }
    if(count0 >= 7  || count1 >=7 ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}