#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int i=1,j=2,k=1,sum=0, sum2=0,n;
        cin>>n;
       vector<int>v;
        if(n%4!=0) cout<<"NO"<<endl;
        else
        {

            for(i=0;i<n/2;i++)
            {
               v.push_back(j);
               j=j+2;
               sum+=v[i];

            }
            for(i=n/2;i<n-1;i++)
            {
                v.push_back(k);
                k=k+2;
                sum2+=v[i];
            }
            int d=sum-sum2;
            v.push_back(d);
            cout<<"YES"<<endl;
            for( int i: v)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
}
