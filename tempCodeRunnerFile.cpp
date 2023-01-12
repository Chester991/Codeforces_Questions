    int n;
    cin>>n;
    while(n!=0){
    int a,b,sum=0;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
    n--;
    }