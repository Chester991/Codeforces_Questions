#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,positive=0,negative=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }

    for(int i = 0; i<n ; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else if(arr[i] % 2 != 0){
            odd++;
        }
        else if(arr[i] > 0){
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        
    }
    cout<<even<<endl;
    cout<<odd<<endl;
    cout<<positive<<endl;
    cout<<negative<<endl;

    return 0;
}