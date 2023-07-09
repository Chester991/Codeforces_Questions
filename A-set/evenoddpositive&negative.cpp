#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,positive=0,neg=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n ; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            neg++;
        }
        if(arr[i] % 2 == 0){
            even++;
        }
        else {
            odd++;
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
}