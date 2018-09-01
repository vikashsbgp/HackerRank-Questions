#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],key=0,k=0;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int j=1;j<n;j++)
    {
        key=arr[j];
        k=j-1;
        while(k>=0 && arr[k]>key)
        {
            arr[k+1]=arr[k];
            k=k-1;
        }
        arr[k+1]=key;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
}
