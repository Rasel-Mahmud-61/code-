
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[]={90,34,2,34,55,66,77,3,45};
    map<int,int>m;
    // maping
    for(int i=0;i<9;i++)
    {
        m[a[i]]++;
    }
    for(auto i: m)
    {
        cout<<i.first<<" "<<i.second<<endl;


    }
    // max count
    int m_max=0;
    for(i=0;i<9;i++)
    {
        m_max=max(m_max,i.second);
    }
}
