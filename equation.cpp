#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int j;
    for(int i=1;i<=n;i++)
    {
        j=distance(arr,find(arr,arr+n,i))+1;
        cout<<distance(arr,find(arr,arr+n,j))+1;
        if(i!=n)
            cout<<endl;
    }
    return 0;
}
