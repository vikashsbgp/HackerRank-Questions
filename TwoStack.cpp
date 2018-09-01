#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    vector<pair<int,int> > value(q);
    int f,s;
    for(int i=0;i<q;i++)
    {
        cin>>f;
        if(f==1)
        {
            cin>>s;
            value.push_back(make_pair(f,s));
        }
        else
            value.push_back(make_pair(f,0));
    }
    stack<int> s1,s2;
    int temp;
    for(int i=0;i<q;i++)
    {
       // if(value[i].first==1)
        //{
            s1.push(value[i].second);
           /* if(s1.empty())
            {
                s1.push(value[i].second);
            }
            else
            {
                while(!s1.empty())
                {
                    temp=s1.top();
                    s1.pop();
                    s2.push(temp);
                }
                s1.push(value[i].second);
            }
        }
        else if(value[i].first==2 || value[i].first==3)
        {
            while(!s1.empty())
                {
                    temp=s1.top();
                    s1.pop();
                    s2.push(temp);
                }
               // s1.push(value[i].second);
                if(value[i].first==2)
                    s2.pop();
                else if(value[i].first==3)
                    cout<<s2.top();
        }*/
    }
    while(!s1.empty())
    {
         cout<<s1.top();
         s1.pop();
    }
    return 0;
}

