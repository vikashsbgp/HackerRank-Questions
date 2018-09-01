#include<iostream>
#include<algorithm>


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int p=*min_element(arr,arr+n);
        int p1=distance(arr,find(arr,arr+n,p));
        cout<<p1+1;
        if(t!=0)
            cout<<endl;
    }
}
