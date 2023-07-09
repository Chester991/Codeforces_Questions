#include<bits/stdc++.h>
using namespace std;

int main(){
    int bact,count=0;
    cin>>bact;

    while (bact/2!=0)
    {
        if(bact%2==1){
            count++;
        }
        bact=bact/2;
    }
    cout<<count+1<<endl;     
}