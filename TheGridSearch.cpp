#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int R,C;
        cin>>R>>C;
        string str1[R];

        for(int i=0;i<R;i++)
            cin>>str1[i];

        int r,c;
        cin>>r>>c;
        string str2[r];

        for(int i=0;i<r;i++)
            cin>>str2[i];

        vector<pair<int,int> > index;
        char start=str2[0].front();
        //cout<<start<<"\n";
        string temp;
        int ans=0;

        for(int i=0;i<=R-r;i++)
        {
            for(int j=0;j<=C-c;j++)
            {
                if(str1[i][j]==start)
                    index.push_back(make_pair(i,j));
            }
        }
 

        /*for(int i=0;i<index.size();i++)
        {
            cout<<index[i].first<<" "<<index[i].second<<"\n";
        }*/

        for(int i=0;i<index.size();i++)
        {
            for(int j=0;j<r;j++)
            {
                temp=str1[index[i].first+j].substr(index[i].second,c);
                //cout<<temp<<"\n";
                if(temp!=str2[j])
                {
                   ans=0;
                   break;
                }
                else
                    ans=1;
            }
           // cout<<"\n";
            if(ans==1)
                break;
        }
        if(ans==1)
            cout<<"YES";
        else
            cout<<"NO";
        if(t!=0)
            cout<<"\n";
    }
    return 0;
}

