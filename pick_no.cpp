#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,count1=0,count2=0;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        count1=0,count2=0;
        count1=count(arr,arr+n,arr[i])+count(arr,arr+n,arr[i]+1);
        count2=count(arr,arr+n,arr[i])+count(arr,arr+n,arr[i]-1);
        count1>count2?arr2[i]=count1:arr2[i]=count2;
    }
    int p=*max_element(arr2,arr2+n);
    cout<<p;
    return 0;
}
