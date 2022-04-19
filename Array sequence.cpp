#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int i,temp, n,sum=0;
        cin>>n;
        int a[n];
        int b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>=b[i])
            {
                temp=a[i];
                a[i]=b[i];
                b[i]=temp;

            }
        }
        for(i=0; i<n-1; i++)
        {
            sum+=abs(a[i]-a[i+1]);
            sum+=abs(b[i]-b[i+1]);
        }

        cout<<sum<<endl;
    }
}
