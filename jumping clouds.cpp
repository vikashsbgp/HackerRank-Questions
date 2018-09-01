#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++)
    {
        if(arr[i+2]==0)
            i++;
        ans++;
    }
    cout<<ans;
    return 0;
}
