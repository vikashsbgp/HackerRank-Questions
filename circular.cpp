#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n],arr1[n],arr2[q];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<q;i++)
        cin>>arr2[i];
    int p=abs(k-n)%n;
    for(int j=p,l=0;l<n;j=(j+1)%n,l++)
    {
        arr1[l]=arr[j];
    }
    for(int j=0;j<q;j++)
    {
        cout<<arr1[arr2[j]]<<endl;
    }
    return 0;
}
