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

    string str1 = "codeforces";
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str2;
        cin >> str2;
        int count = 0;
        for (int i = 0; i < 11; i++)
        {
            if (str1[i] != str2[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}