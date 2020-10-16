/* Bit++ */

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    int i,n,j,c=0;
    cin>>n;
    char a[n][3];
    for(i=0;i<n;i++)
    for(j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        if((a[i][0]=='X'&&a[i][1]=='+'&&a[i][2]=='+')||(a[i][0]=='+'&&a[i][1]=='+'&&a[i][2]=='X'))
        {
            c=c+1;
        }
        else
        c=c-1;
    }
     
    cout<<c;
     return 0;
    }
