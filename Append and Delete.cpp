#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s,t;
    int k;
    cin>>s>>t>>k;
    int n1=s.length();
    int n2=t.length();
    int count=0,count1=0;
    if(n1==n2)
    {
        for(int i=0;i<n1;i++)
        {
            if(s[i]!=t[i])
            {
                count=n1-i;
                break;
            }
        }
         int p=count1+2*count;
        if(p<=k)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else if(n1>n2)
    {
        count1=n1-n2;
        for(int i=0;i<n2;i++)
        {
            if(s[i]!=t[i])
                {
                    count=n2-i;
                    break;
                }
        }
         int p=count1+2*count;
        if(p<=k)
            cout<<"Yes";
        else
            cout<<"No";
    }
    else
    {
        count1=(n2-n1);
        for(int i=0;i<n1;i++)
        {
            if(s[i]!=t[i])
            {
                count=n1-i;
                break;
            }
        }
        if(count1+2*count==k)
            cout<<"Yes";
        else if(k<count1+2*count)
            cout<<"No";
        else
        {
            if((k-count1+2*count)%2!=0)
                cout<<"No";
            else
                cout<<"Yes";
        }
    }
        return 0;
}
