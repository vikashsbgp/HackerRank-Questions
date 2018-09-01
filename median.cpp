#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    multiset<int> mset;
    multiset<int> :: iterator itr1;
    int in,count=0;
    double d1,d2;
    for(int i=1;i<=n;i++)
    {
        cin>>in;
        mset.insert(in);
        count=0;
        itr1=mset.begin();
        if(i==1)
        {
           d1=in;
            cout<<fixed<<setprecision(1)<<d1<<"\n";
        }
        else
        {
            if(mset.size()%2==0)
            {
               // itr1=mset.begin()+(i/2);
               advance(itr1,i/2);
                d2=*itr1;
                d1=*(--itr1);
                d2=(d1+d2)/2;
                cout<<fixed<<setprecision(1)<<d2<<"\n";
            }
            else
            {
                //itr1=itr1+(i/2);
                advance(itr1,i/2);
                d2=*itr1;
                cout<<fixed<<setprecision(1)<<d2<<"\n";
            }
        }
    }
    //cout<<"\n";
    return 0;
}
