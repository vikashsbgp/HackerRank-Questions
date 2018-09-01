#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec2;
         vector<int> :: iterator itr;
        int arr[n],dis[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n;i++)
            if(arr[i]==1)
                vec2.push_back(i);

        for(int i=0;i<n;i++)
            cin>>dis[i];

        vector<pair<int,int> >vec;

        for(int i=0;i<n;i++)
            vec.push_back(make_pair(arr[i],0));

        if(count(arr,arr+n,1)==n)
            cout<<"0";

      else
      {

      }
    }
}
