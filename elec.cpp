#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cost=0;
        cin>>n;
        int arr[n],dis[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            cin>>dis[i];
        //if(find(arr,arr+n,0)!=arr+n)
         //   cout<<"0";
       // else
       // {
            vector<int> vec;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                    vec.push_back(i);
            }
            for(int i=0,j=1;i<n;i++)
            {
                if(i>vec[j]&&j>=vec.size()-1)
                    j++;
                if(!binary_search(vec.begin(),vec.end(),i))
                {
                    int p1=abs(dis[i]-dis[vec[j-1]]);
                    int p2=abs(dis[vec[j]]-dis[i]);
                    if(p1<p2)
                    {
                        cost+=p1;
                        vec.push_back(i);
                        sort(vec.begin(),vec.end());
                    }
                    else
                    {
                        cost+=p2;
                        vec.push_back(i);
                        sort(vec.begin(),vec.end());
                    }
                }
            }
            cout<<cost;
        //}
    }
}
