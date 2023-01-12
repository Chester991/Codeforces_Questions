#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={5,4,3,6,7,6};
    sort(v.begin(),v.end());
    for(int i=0; i<v.length;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}