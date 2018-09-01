#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> vec;
    int cnt=0,in;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        vec.push_back(in);
    }
    for(int i=0;i<n;i++)
    {
        if(binary_search(vec.begin(),vec.end(),vec[i]+d))
        {
            if(binary_search(vec.begin(),vec.end(),vec[i]+2*d))
            {
                cnt++;
                if((vec[i]+2*d)>vec[n-1])
                    break;
            }
        }
    }
    cout<<cnt;
    return 0;
}
