#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    int in;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        vec.push_back(in);
    }
    cout<<distance(vec.begin(),find(vec.begin(),vec.end(),));
    return 0;
}
