#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n],mul[n];
   fill(mul,mul+n,0);
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       if(arr[i]%5>=3)
           mul[i]=5-(arr[i]%5);
   }
   for(int i=0;i<n;i++)
   {
       if(arr[i]>=38)
       {
          arr[i]+=mul[i];
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i];
       if(i<n-1)
       cout<<endl;
   }
}

