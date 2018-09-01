#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int ans=1;
    string temp;
    temp[0]=str[0];
    for(int i=1;i<str.length();i++)
    {
        if(temp.find(str[i])!=string::npos)
        {
            temp=temp.substr(temp.find(str[i])+1,i-temp.find(str[i]));
        }
        else{
            if(ans<temp.length()+1)
            {
                temp+=str[i];
                ans++;
            }
        }
    }
    cout<<temp;
    return 0;
}
