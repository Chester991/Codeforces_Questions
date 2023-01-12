#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n!=0){
    long long int a,b,sum=0;
    cin>>a>>b;

    for(long long int i=a;i<=b;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
    n--;
    }
    return 0;
}