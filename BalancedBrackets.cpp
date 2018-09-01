#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        stack <int> brac;
        string str;
        cin>>str;
        int ans=1;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='[')
                brac.push(str[i]);
            else if(!brac.empty())
            {
                if(str[i]==')' && brac.top()=='(')
                    brac.pop();
                else if(str[i]=='}' && brac.top()=='{')
                    brac.pop();
                else if(str[i]==']' && brac.top()=='[')
                    brac.pop();
                else
                {
                    ans=0;
                    break;
                }
            }
            else
                {
                    ans=0;
                    break;
                }
        }
        if(brac.empty() && ans!=0)
            cout<<"YES";
        else
            cout<<"NO";
        if(n!=0)
            cout<<"\n";
    }
    return 0;
}
