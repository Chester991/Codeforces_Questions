#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin >> x;
    int y = x;

    if (x - y == 0)
    {
        cout << "int " << y << endl;
    }
    else
    {
        cout << "float " << ((x - y)*10) << endl;
    }

    return 0;
}