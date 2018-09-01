#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    map<string,int> mag;
    string str1[m],str2[n];

    for(int i=0;i<m;i++)
        cin>>str1[i];

    //int cnt=count(str1,str+m,"two");

    for(int i=0;i<n;i++)
        cin>>str2[i];

    for(int i=0;i<m;i++)
    {
        if(mag.find(str1[i])!=mag.end())
            ((mag.find(str1[i]))->second)++;
        else
            mag[str1[i]]=1;
    }

    map<string,int> ::iterator it;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        it=mag.find(str2[i]);
        if(it!=mag.end() && it->second!=0)
        {
            ans=1;
            it->second--;
        }
        else
            {
                ans=0;
                break;
            }
    }
    if(ans==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

