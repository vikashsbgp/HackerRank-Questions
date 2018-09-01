#include<bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int q;
        cin>>q;
        int opr,elmnt;
        int flag=0;
        map<int,int> m,m1;
        map<int,int> :: iterator itr,itr1;
        for(int i=0;i<q;i++)
        {
            flag=0;
            cin>>opr>>elmnt;
            if(opr==1)
            {
                m[elmnt]++;
                if(m.find(elmnt)!=m.end() & i!=0)
                {
                    itr=m.find(elmnt);
                    m1.find(itr->second)->second--;
                    m1[m[elmnt]]++;
                }
                else
                {
                    m1[m[elmnt]]++;
                }
            }
            else if(opr==2)
            {
                if(m.find(elmnt)!=m.end())
                {
                    itr=m.find(elmnt);
                    m1.find(itr->second)->second--;
                    if(m1.find(itr->second)->second==0)
                    {
                        itr1=m1.find(itr->second);
                        m1.erase(itr1);
                    }
                    itr->second--;
                }
            }
            else
            {
                if(m1.find(elmnt)!=m1.end())
                    cout<<"1";
                else
                    cout<<"0";
                if(i<q-1)
                    cout<<"\n";
            }
        }
}
