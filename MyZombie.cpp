#include<bits/stdc++.h>

using namespace std;
const int Max_N = 1e5 + 5;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int z[Max_N];
        for(int i=1;i<=n;i++)
            cin>>z[i];
        int l,r,k;
        vector<pair<int,int> > cranes[Max_N];
        for(int i=0;i<m;i++)
        {
            cin>>l>>r>>k;
            cranes[l].push_back(make_pair(r,k));
        }
        set<pair<int,int> > s;
        int ans=0;
        for(int i=1;i<=m;i++)
        {
             vector <pair<int,int> > ::iterator it;

            for(it=cranes[i].begin();it!=cranes[i].end();it++)
                s.insert(*it);

            pair<int,int> temp=(*s.rbegin());
            set<pair<int,int> >::iterator it1;
                    it1 = s.end();
                    --it1;
                    s.erase(it1);
            int sub=min(z[i],temp.second);

            for(int j=i;j<=temp.first;i++)
                z[i]-=sub;
            ans+=sub;
        }
        cout<<ans;
    }
}
