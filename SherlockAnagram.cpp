#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        map<string,int> m;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            for(int j=1;j+i-1<len;j++)
            {
                string s1=s.substr(i,j);
                sort(s1.begin(),s1.end());
                m[s1]++;
            }
        }
        long long int ans=0;
        map<string,int> :: iterator itr;

        for(itr=m.begin();itr!=m.end();itr++)
           ans += (long long int)((itr->second) * (itr->second - 1) )/ 2;
            cout << ans << endl;
           // cout<<itr->first<<" "<<itr->second<<"   ";

    }
}
