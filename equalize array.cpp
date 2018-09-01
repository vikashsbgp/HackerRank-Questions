#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int temp[101];
    fill(temp,temp+101,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        temp[arr[i]]++;
    }
    int p=*max_element(temp,temp+101);
    if(p==1)
        cout<<n-1;
    else
        cout<<n-p;
    return 0;
}
