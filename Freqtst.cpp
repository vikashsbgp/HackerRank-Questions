#include<bits/stdc++.h>

using namespace std;

int main()
{
        int q;
        cin>>q;
        int opr,elmnt;
        int flag=0;
        map<int,int> m1,m2;
        map<int,int> :: iterator itr;
        for(int i=0;i<q;i++)
        {
            flag=0;
            cin>>opr>>elmnt;
            if(opr==1)
            {

            }
            else if(opr==2)
            {
                if(m1.find(elmnt)!=m1.end())
                {
                    itr=m1.find(elmnt);
                    itr->second--;

                }
            }
        }
}
