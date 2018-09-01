#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n,k,flag=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
   vector<int> vec;
   vec.push_back(arr[0]);
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<vec.size();j++)
       {
           if((vec[j]+arr[i])%k!=0)
                vec.push_back(arr[i]);
           else
                break;
       }
   }
   for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<"   ";
   return 0;
}

