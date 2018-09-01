#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int arr[26];
   
    for(int i=0;i<26;i++)
        cin>>arr[i];
   
    string s;
    cin>>s;
    int n=s.length();
    int arr1[n];
   
    for(int i=0;i<n;i++)
        arr1[i]=arr[s[i]-97];
   
    int p=*max_element(arr1,arr1+n);
    cout<<p*n;
    return 0;
}
