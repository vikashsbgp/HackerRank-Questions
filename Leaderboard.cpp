#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    map<string,int> m,m1;
    map<string,int> :: iterator it,it1;

    vector<pair<int,string> > v,v1;
     vector<pair<int,string> > :: iterator itr;

    string str;
    int in,count=1;
    vector<int> arr,arr1;
    for(int i=0;i<n;i++)
    {
        cin>>str>>in;
        m1[str]++;
        m[str]+=in;
    }

    for(it=m1.begin();it!=m1.end();it++)
    {
        arr.at(it->second)++;
        v1.push_back(make_pair(it->second,it->first));
    }

    sort(v1.begin(),v1.end());


    for(it=m.begin();it!=m.end();it++)
    {
        arr1.at(it->second)++;
        v.push_back(make_pair(it->second,it->first));
    }

    sort(v.begin(),v.end());

    for(int i=v1.size()-1;i>=0;i++)
    {
        if(arr[v1[i].first]==1)
        {
            m1[v1[i].second]=v1.size()-i;
            m.erase(m.find(v1[i].second));
        }
        else
        {

        }
    }


    return 0;
}

