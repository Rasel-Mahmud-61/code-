
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int i, n;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {

            cin>>a[i];


        }
        sort(a,a+n);
        // frequency count
        map<int,int>m;
        for(i=0; i<n; i++)
        {
            m[a[i]]++;

        }
        //max count
        int f_max=0;
        for(auto i: m)
        {
            f_max=max(f_max,i.second);
        }
        int ans=0,add,rem;
        while(f_max<n)
        {
            rem=n-f_max;
            add= n-rem;
            ans++;
            ans+=min(rem,f_max);
            f_max+=min(f_max,rem);

        }
        cout<<ans<<endl;


    }
}
