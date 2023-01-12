#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO" << endl;
            
        }
        else
        {
            cout << "YES" << endl;
            break;
        }
    }

    return 0;
}