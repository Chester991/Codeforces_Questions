#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;

    long long num1 = a % 10;
    long long num2 = b % 10;

    cout << num1 + num2 << endl;

    return 0;
}