    /* HQ9+ */

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    string s;
    int i,n,cnt=0;
    cin>>s;
    n=s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
        cnt++;
        }
        
    }
    if(cnt!=0)
    cout<<"YES";
    else
    cout<<"NO";
     return 0;
    }
