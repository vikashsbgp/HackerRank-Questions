#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        int flag1=0;
        if(binary_search(str.begin(),str.end(),'6'))
        {
            int dis=distance(str.begin(),find(str.begin(),str.end(),'6'));

            if(str[dis+1]=='6')
                flag1=1;
            for(int i=53;i<58;i++)
            {
                if(flag1==0 && i==54);
                else{
               char ch=(char)i;
               if(binary_search(str.begin(),str.end(),ch))
               {
                    int k=60+i-48;
                    cout<<(char)k;
               }
            }}
        }
        flag1=0;
        if(binary_search(str.begin(),str.end(),'7'))
        {
            int dis=distance(str.begin(),find(str.begin(),str.end(),'7'));

            if(str[dis+1]=='7')
                flag1=1;
            for(int i=48;i<58;i++)
            {
                if(flag1==0 && i==55);
                else{
                char ch=(char)i;
               if(binary_search(str.begin(),str.end(),ch))
               {
                   int k=70+i-48;
                   cout<<(char)k;
               }
            }}
        }
        flag1=0;
        if(binary_search(str.begin(),str.end(),'8'))
        {
             int dis=distance(str.begin(),find(str.begin(),str.end(),'8'));
             if(str[dis+1]=='8')
                flag1=1;
            for(int i=48;i<58;i++)
            {
                if(flag1==0 && i==56);
                else{
                char ch=(char)i;
               if(binary_search(str.begin(),str.end(),ch))
               {
                   int k=80+i-48;
                   cout<<(char)k;
               }
            }}
        }
        if(binary_search(str.begin(),str.end(),'9') && binary_search(str.begin(),str.end(),'0'))
            {
                cout<<"Z";
            }
        if(t!=0)
            cout<<endl;
    }
}
