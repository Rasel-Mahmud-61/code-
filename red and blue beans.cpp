#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int r,b,d,diff,n,e;
        cin>>r>>b>>d;
           diff=abs(r-b);

            n=min(r,b);
            e=(diff+n-1)/n;

            if(e<=d)  cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

    }
}

