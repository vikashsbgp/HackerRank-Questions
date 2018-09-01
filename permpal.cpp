#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char ch='a';
        int n =s.size(),arr[26],flag=0;
        int perm[n],pos=0;

        for(int i=0;i<26;i++)
        {
            arr[i]=count(s.begin(),s.end(),ch);
            ch++;
        }

        vector< pair<char,int> > vect;
         for(int i=0;i<26;i++)
                if(arr[i]%2!=0)
                    flag++;

        if(n%2!=0)
        {
            for(int i=0;i<26;i++)
                if(arr[i]%2!=0)
                    pos=i;
            perm[n/2]=distance(s.begin(),find(s.begin(),s.end(),'a'+pos));
            s[perm[n/2]]='%';
            arr[pos]--;
        }

        if(flag>1)
            cout<<"-1";
        else{

        for(int i=0;i<26;i++)
            if(arr[i]!=0)
                vect.push_back(make_pair('a'+i,arr[i]));

        int z=n-1,i=0;

        for(int j=0;j<vect.size();j++)
        {
                for(int k=vect[j].second;k>0;k-=2,i++,z--)
                {
                    perm[i]=distance(s.begin(),find(s.begin(),s.end(),vect[j].first));
                    s[perm[i]]='%';
                    perm[z]=distance(s.begin(),find(s.begin(),s.end(),vect[j].first));
                    s[perm[z]]='%';
                }
        }
        for(int i=0;i<n;i++)
            cout<<perm[i]+1<<" ";
        if(t!=0)
            cout<<endl;
    }
    }
    return 0;
}
