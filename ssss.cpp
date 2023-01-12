#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t>0){
      int a,b,sum=0;
      cin>>a>>b;

      for(int i=a;i<=b;i++){
        sum = sum + i;
      }
      cout<<sum<<endl;
      t--;
  }
    return 0;
}