#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long int freq=0,ans=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='a')
            freq++;
    long long int n;
    cin>>n;
    int k=s.length();
    if(n<=k)
    {
        for(long long int i=0;i<n;i++)
        {
            if(s[i]=='a')
                ans++;
        }
    }
    else
    {
        long long int tmp=n/k;
        long long int rem=n%k;
        ans=tmp*freq;
        for(long long int i=0;i<rem;i++)
            if(s[i]=='a')
                ans++;
    }
    cout<<ans;
    return 0;
}
