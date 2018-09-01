#include<iostream>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ca=count(arr,arr+n,a);
        int cb=count(arr,arr+n,b);
        double pa,pb;
        pa=(double)ca/n;
        pb=(double)cb/n;
       cout<<fixed<<setprecision(10)<<pa*pb;
        if(t!=0)
            cout<<"\n";
    }
    return 0;
}
