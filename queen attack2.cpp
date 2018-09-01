#include <bits/stdc++.h>

using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b);
int upper(int a, int b);
int lower(int a, int b);
int middle(int a,int b);
int rq,cq;
 int n,k;
int main()
{
    cin>>n>>k;
    cin>>rq>>cq;
    vector<pair<int,int> > vec;
   /* for(int i=0;i<k;i++)
    {
        cin>>ro>>co;
        vec.push_back(make_pair(ro,co));
    }*/
    int a,b;
    vector<vector<pair<int,int> > > g(8);

    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        if(a==rq && cq>b)  //left
            g[0].push_back(make_pair(a,b));

        else if(a==rq && cq<b)   //right
            g[1].push_back(make_pair(a,b));

        else if(b==cq && rq>a)   //down
            g[2].push_back(make_pair(a,b));

        else if(b==cq && rq<a)   //up
            g[3].push_back(make_pair(a,b));

        else if(rq>a && cq<b && abs(rq-a)==abs(cq-b))   //left_down_diagonal
            g[4].push_back(make_pair(a,b));

        else if(rq>a && cq>b && abs(rq-a)==abs(cq-b))   //right_down_diagonal
            g[5].push_back(make_pair(a,b));

        else if(rq<a && cq>b && abs(rq-a)==abs(cq-b))   //left_up_diagonal
            g[6].push_back(make_pair(a,b));

        else if(rq<a && cq<b && abs(rq-a)==abs(cq-b))   //right_up_diagonal
            g[7].push_back(make_pair(a,b));
    }
    if(g[0].size()!=0)
        sort(g[0].begin(),g[0].end(),sortbysec);      //max
     if(g[1].size()!=0)
        sort(g[1].begin(),g[1].end(),sortbysec);      //min
    if(g[2].size()!=0)
        sort(g[2].begin(),g[2].end());                       //max
    if(g[3].size()!=0)
        sort(g[3].begin(),g[3].end());                       //min
    if(g[4].size()!=0)
        sort(g[4].begin(),g[4].end());                      //max
    if(g[5].size()!=0)
        sort(g[5].begin(),g[5].end());                     //max
    if(g[6].size()!=0)
        sort(g[6].begin(),g[6].end());                    //min
    if(g[7].size()!=0)
        sort(g[7].begin(),g[7].end());                   //min

    vector<pair<int,int> > v;
    if(g[1].size()!=0)
        v.push_back(make_pair(g[1][0].first,g[1][0].second));
    if(g[3].size()!=0)
        v.push_back(make_pair(g[3][0].first,g[3][0].second));
    if(g[6].size()!=0)
        v.push_back(make_pair(g[6][0].first,g[6][0].second));
    if(g[7].size()!=0)
        v.push_back(make_pair(g[7][0].first,g[7][0].second));
    if(g[0].size()!=0)
        v.push_back(make_pair(g[0][g[0].size()-1].first,g[0][g[0].size()-1].second));
    if(g[2].size()!=0)
        v.push_back(make_pair(g[2][g[2].size()-1].first,g[2][g[2].size()-1].second));
    if(g[4].size()!=0)
        v.push_back(make_pair(g[4][g[4].size()-1].first,g[4][g[4].size()-1].second));
    if(g[5].size()!=0)
        v.push_back(make_pair(g[5][g[5].size()-1].first,g[5][g[5].size()-1].second));

    int total=2*(n-1);
    total +=min(n-cq,n-rq);
    total+=min(n-cq,rq-1);
    total+=min(cq-1,n-rq);
    total+=min(rq-1,cq-1);
    //cout<<total;
    int ans=0,p,q;

    for(int i=0;i<v.size();i++)
    {
        p=v[i].first;
        q=v[i].second;
        if(rq<p)
            ans+=upper(p,q);
        else if(rq==p)
            ans+=middle(p,q);
        else
            ans+=lower(p,q);
    }
    cout<<total-ans;
    return 0;
}
int upper(int a,int b)
{
    int temp=0;

            if(cq==b)
            temp=n-a+1;
        else if(abs(rq-a)==abs(cq-b) && cq>b)
            temp=min(n-a,b-1)+1;
        else if(abs(rq-a)==abs(cq-b) && cq<b)
            temp=min(n-a,n-b)+1;

    return temp;
}
int lower(int a, int b)
{
    int temp=0;


        if(cq==b)
            temp=a-1+1;
        else if(abs(rq-a)==abs(cq-b) && cq<b)
            temp=min(a-1,n-b)+1;
         else if(abs(rq-a)==abs(cq-b) && cq>b)
            temp=min(a-1,b-1)+1;
    return temp;
}
int middle(int a, int b)
{
    int temp=0;
    if(cq>b)
    {
            temp=b;
    }
    else
    {
            temp=n-b+1;
    }
    return temp;
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}

