#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r", stdin);
    int r,c,n;
    cin>>r>>c>>n;
    vector<pair<int,int> > index;
    string str1[r],str2[r],str3[r];
    for(int i=0;i<r;i++)
    {
        cin>>str1[i];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(str1[i][j]=='O')
                index.push_back(make_pair(i,j));
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            str2[i][j]='O';
            str3[i][j]='O';
        }
    }

    int x,y;
    for(int i=0;i<index.size();i++)
    {
        x=index[i].first;
        y=index[i].second;
        str3[x][y]='.';
        if(x+1<r)
        {
            if(str1[x+1][y]!='O')
                str3[x+1][y]='.';
        }
        if(x-1>=0)
        {
            if(str1[x-1][y]!='O')
                str3[x-1][y]='.';
        }
        if(y+1<c)
        {
            if(str1[x][y+1]!='O')
                str3[x][y+1]='.';
        }
        if(y-1>=0)
        {
            if(str1[x][y-1]!='O')
                str3[x][y-1]='.';
        }
    }

    if((n-1)%4==0)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<str1[i][j];
            }
            cout<<"\n";
        }
    }
    else if(n%2==0)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<str2[i][j];
            }
            cout<<"\n";
        }
    }
    else
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<str3[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}
