#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;

    if(a<=b && a<=c){
        cout<<a<<endl;
        if(b<c){
            cout<<b<<endl<<c<<endl;
        }
        else{
            cout<<c<<endl<<b<<endl;
        }
    }
    else if (b<=a && b<=c){
        cout<<b<<endl;
        if(a<c){
            cout<<a<<endl<<c<<endl;
        }
        else{
            cout<<c<<endl<<a<<endl;
        }
    }
    else{
        cout<<c<<endl;
        if(b<a){
            cout<<b<<endl<<a<<endl;
        }
        else{
            cout<<a<<endl<<b<<endl;
        }
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}