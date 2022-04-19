#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,b,r,ctr=0,rem,i,z;
        cin>>n>>r>>b;
        ctr=r/(b+1);
        rem=r%(b+1);
        while(b--)
        {

            int z=ctr;
            if(rem!=0)
            {
                z++;
                rem--;
            }
            for(i=1; i<=z; i++) cout<<"R";
            cout<<"B";

        }
        for(i=1; i<=ctr; i++)
            {
                cout<<"R";
            }

        cout<<endl;
    }
}
