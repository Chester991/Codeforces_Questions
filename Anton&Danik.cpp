#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, countA = 0, countD = 0;
    cin >> n;

    string str;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            countA++;
        }
        else if (str[i] == 'D')
        {
            countD++;
        }
    }
    if (countA > countD)
    {
        cout << "Anton" << endl;
    }
    else if (countD > countA)
    {
        cout << "Danik" << endl;
    }
    else if (countD == countA)
    {
        cout << "Friendship" << endl;
    }

    return 0;
}