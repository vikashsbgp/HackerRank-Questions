#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;

        cin>>s;
        s1=s;

        sort(s.begin(),s.end());
        if(s1==s)
            cout<<"yes";
        else
            cout<<"no";
        if(t!=0)
            cout<<endl;
    }
}
