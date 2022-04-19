#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i, n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {

        cin>>a[i];

    }
    map<int,int>m;
    for(i=0;i<n;i++)
    {

        m[a[i]]++;
    }
    for(auto i : m)
    {

        cout<<i.first<<" "<<i.second<<endl;

    }
    int f_max=0;
    for(auto it: m)
    {
        f_max=max(f_max,it.second);
    }
    cout<<f_max<<endl;



}
