#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,cot=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[n];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                    cot++;
                   // cout<<i<<" "<<j<<"\t";
            }
        }
    }
    cout<<cot;
    return 0;
}
