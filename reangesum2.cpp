#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    int n;
    int arr[n];

    for(int i=a;i<=b;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
    return 0;
}