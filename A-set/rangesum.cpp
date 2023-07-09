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
    cin >> n;
    while (n != 0)
    {
        double a, b, sum = 0;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
        {
            sum = sum + i;
        }
        cout << sum << endl;
        n--;
    }
}