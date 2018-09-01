#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(s.substr(0,5)=="hydro" && s.substr(n-2,2)=="ic")
            cout<<"non-metal acid";
        else if(s.substr(n-2,2)=="ic")
            cout<<"polyatomic acid";
        else
            cout<<"not an acid";
        if(t!=0)
            cout<<endl;

    }
}
