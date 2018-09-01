#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp;
        cin>>n;
        int arr[n+1];
        for(int i=2;i<=n;i+=2)
        {
            temp=i-1;
            arr[i-1]=i;
            arr[i]=temp;
        }
        if(n%2!=0)
        {
            arr[n]=arr[n-1];
            arr[n-1]=n;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<arr[i];
            if(i!=n)
                cout<<" ";
        }
        if(t!=0)
            cout<<endl;
    }
}
