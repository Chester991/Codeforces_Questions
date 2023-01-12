#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << "YES" << endl;
            break;
        }
        else{
            cout<<"NO"<<endl;
            break;
        }
    }
    return 0;
}