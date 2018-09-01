#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b);
int main()
{
    int a,b;
    int rq=4,cq=4;
    vector<vector<pair<int,int> > > g(8);
    for(int i=0;i<7;i++)
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
    sort(g[0].begin(),g[0].end(),sortbysec);      //max
    sort(g[1].begin(),g[1].end(),sortbysec);      //min
    sort(g[2].begin(),g[2].end());                       //max
    sort(g[3].begin(),g[3].end());                       //min
    sort(g[4].begin(),g[4].end());                      //max
    sort(g[5].begin(),g[5].end());                     //max
    sort(g[6].begin(),g[6].end());                    //min
    sort(g[7].begin(),g[7].end());                   //min

    vector<pair<int,int> v;
    v.push_back(make_pair(g[1][0].first,g[1][0].second));
    v.push_back(make_pair(g[3][0].first,g[3][0].second));
    v.push_back(make_pair(g[6][0].first,g[6][0].second));
    v.push_back(make_pair(g[7][0].first,g[7][0].second));
    v.push_back(make_pair(g[0][g[0].size()-1].first,g[0][g[0].size()-1].second));
    v.push_back(make_pair(g[2][g[2].size()-1].first,g[2][g[2].size()-1].second));
    v.push_back(make_pair(g[4][g[4].size()-1].first,g[4][g[4].size()-1].second));
    v.push_back(make_pair(g[5][g[5].size()-1].first,g[5][g[5].size()-1].second));

    cout<<g[3][0].first<<" "<<g[3][0].second<<"\t"<<g[3][1].first<<" "<<g[3][1].second;
    sort(g[2].begin(),g[2].end(),sortbysec);
    cout<<"\n"<<g[2][0].first<<" "<<g[2][0].second<<"\t"<<g[2][1].first<<" "<<g[2][1].second;
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second<b.second);
}
