#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input1.txt","r",stdin);
    //freopen("input2.txt","w",stdout);
    long long int n,r;
    long long int ans=0;
    cin>>n>>r;
    int arr[n];

    map<int,int> cnt;
    map<int,int> :: iterator itr;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    /*for(itr=cnt.begin();itr!=cnt.end();itr++)
    {
        cout<<itr->first<<"  "<<itr->second<<"\n";
        sum+=itr->second;
    }*/
   // sort(arr,arr+n);

    if(count(arr,arr+n,arr[0])==n && r==1)
    {
        ans=(n*(n-1)*(n-2))/6;
    }
    else if(r==1)
    {
        for(itr=cnt.begin();itr!=cnt.end();itr++)
        {
            ans+=(itr->second*(itr->second-1)*(itr->second-2))/6;
        }
    }
    else
    {
        for(itr=cnt.begin();itr!=cnt.end();itr++)
        {
            int a1=itr->first;
            int a2=a1*r;
            int a3=a2*r;

            if(cnt.find(a2)!=cnt.end() && cnt.find(a3)!=cnt.end())
            {
                //cout<<cnt[a1]<<"  "<<cnt[a2]<<"  "<<cnt[a3]<<"\n ";
                ans=ans+(cnt[a1]*cnt[a2]*cnt[a3]);
            }
        }
    }
    cout<<ans;
    return 0;

}
