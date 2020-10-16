

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
            int i,n,m,j,count=0;
        cin>>n>>m;
        for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)
        {
            if(i*i+j==n && i+j*j==m)
            count++;
        }
     
    cout<<count;
    return 0;
    }
