#include<bits/stdc++.h>

using namespace std;
void ifEquals(stack<int> j, stack<int> d, int *x, int *y);
vector<int> morgan;
stack<int> jack,daniel;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen ("myfile.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
       // stack<int> jack,daniel;
        string a,b;
        cin>>a;
        cin>>b;


        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

       //jack.push(INT_MAX);
       //daniel.push(INT_MAX);

        for(int i=0;i<a.length();i++)
            jack.push(a[i]);

        for(int i=0;i<b.length();i++)
            daniel.push(b[i]);

       int count_j=0,count_d=0;
       char ch1='*',ch2='#';

        while(!jack.empty() && !daniel.empty())
        {
            if(jack.top()<daniel.top() || flag==1)
            {
                flag=0;
                morgan.push_back(jack.top());
                jack.pop();
                count_j++;
            }
            else if(jack.top()>daniel.top() || flag==2)
            {
                flag=0;
                morgan.push_back(daniel.top());
                daniel.pop();
                count_d++;
            }
            else
            {
                ifEquals(jack,daniel,&count_j,&count_d);
            }
        }

        if(morgan.size()!=(a.length()+b.length()))
        {
            if(count_j==a.length())
            {
                while(!daniel.empty())
                {
                    morgan.push_back(daniel.top());
                    daniel.pop();
                    count_d++;
                }
            }
            if(count_d==b.length())
            {
                while(!jack.empty())
                {
                    morgan.push_back(jack.top());
                    jack.pop();
                    count_j++;
                }
            }
        }
        for(int i=0;i<morgan.size();i++)
            cout<<(char)morgan[i];

       // morgan.erase(morgan.begin(),morgan.end());

        if(t!=0)
            cout<<"\n";
    }
    return 0;
}
void ifEquals(stack<int> j,stack<int> d,int *x, int *y)
{
    int temp1=j.top();
    int temp2=d.top();
    j.pop();
    d.pop();
    if(j.top()==d.top())
    {
        return ifEquals(j,d,x,y);
    }
   else if(j.top()<d.top())
    {
        j.push(temp1);
        d.push(temp2);
        morgan.push_back(j.top());
        *x++;
    }
    else if(j.top()>d.top())
    {
        j.push(temp1);
        d.push(temp2);
        morgan.push_back(d.top());
        *y++;
    }
}


