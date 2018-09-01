#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
bool check(pair<int,int> :: iterator p1, pair<int,int> :: iterator p2, pair<int,int> :: iterator p3);
double area(pair<int,int> :: iterator p1, pair<int,int> :: iterator p2, pair<int,int> :: iterator p3);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,in1,in2,sum=0;
        cin>>n;
        vector<pair<int,int> > vec[n];
        for(int i=0;i<n;i++)
        {
            cin>>in1>>in2;
            vec.push_back(make_pair(in1,in2));
        }
        vector<pair<int,int> > :: iterator i,j,k;
        for( i=vec.begin();i!=vec.end();i++)
        {
            for( j=i+1;j!=vec.end();j++)
            {
                for( k=j+1;k!=vec.end();k++)
                {
                    if(check(i,j,k))
                        sum+=area();
                }
            }
        }
        cout<<sum;
        if(t!=0)
            cout<<"\n";
    }
    return 0;
}
bool check(pair<int,int> :: iterator p1, pair<int,int> :: iterator p2, pair<int,int> :: iterator p3)
{
    if((*p1).first==(*p1).second && (*p2).first==(*p2).second && (*p3).first==(*p3).second)
        return false;
    else if((*p1).first==(*p2).first && (*p2).first==(*p3).first)
         return false;
    else if((*p1).second==(*p2).second && (*p2).second==(*p3).second)
        return false;
    else
        return true;
}
double area(pair<int,int> :: iterator p1, pair<int,int> :: iterator p2, pair<int,int> :: iterator p3)
{
    int x1=(*p1).first,
          x2=(*p2).first,
          x3=(*p3).first,
          y1=(*p1).second,
          y2=(*p2).second,
          y3=(*p3).second;
    return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2);
}
