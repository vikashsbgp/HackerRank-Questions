#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,sum=0,first=0,second=0;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int rem=sum-s;
        int k=n-1;
        for(int i=0;i<n;i++)
        {
            if(rem==0)
            {
                first=i+1;
                second=k+1;
                break;
            }
            if(abs(rem-arr[i])>abs(rem-arr[k]))
            {
                first-i;
                rem-=arr[i];
            }
            else
            {
                second=k;
                rem-=arr[k];
            }
            k--;
        }
        cout<<first<<" "<<second;
    }
    return 0;
}
