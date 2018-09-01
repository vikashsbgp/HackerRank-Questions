#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int count=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='c' || s[i]=='h' || s[i]=='e' || s[i]=='f')
            {
                string str=s.substr(i,4);
                sort(str.begin(),str.end());
                if(str=="cefh")
                    count++;
            }
        }
        if(count==0)
            cout<<"normal";
        else
            cout<<"lovely "<<count;
        if(t!=0)
            cout<<endl;
    }
}
