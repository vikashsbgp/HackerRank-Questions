#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int x=0;
    stringstream geek(s.substr(0,2));
    geek>>x;
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
            cout<<"00"<<s.substr(2,6);
        else
            cout<<s.substr(0,8);
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
            cout<<s.substr(0,8);
        else
            cout<<x+12<<s.substr(2,6);
    }

    return 0;

}
