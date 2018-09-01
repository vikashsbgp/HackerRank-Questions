#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> > lck;
    int in1,in2,cnt=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        cin>>in1>>in2;
        sum1+=in1;
        if(in2==1)
            cnt++;
        lck.push_back(make_pair(in1,in2));
    }
    cout<<cnt<<"\n";
    int sum=0;
    sort(lck.begin(),lck.end());
    if(k>=cnt)
    {
        for(int i=0;i<lck.size();i++)
            sum+=lck[i].first;
    }
    else
    {
        int dif=cnt-k;
        int tmp=0;
        for(int i=0;i<lck.size();i++)
        {
            if(lck[i].second==1)
            {
                sum-=lck[i].first;
                tmp++;
            }
            if(tmp==dif)
                break;
        }
        sum=sum1+2*sum;
    }
    cout<<sum;
}
