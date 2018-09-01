#include <bits/stdc++.h>

using namespace std;

int Cut_Rod(int *p,int n);

int main()
{
    int arr[10]={1,5,8,9,10,17,17,20,24,30};
    cout<<Cut_Rod(arr,4);
    return 0;
}
int Cut_Rod(int *p, int n)
{
    if(n==0)
        return 0;
    int q=INT_MIN;
    for(int i=0;i<n;i++)
        q=max(q,p[i]+Cut_Rod(p,n-i));
    return q;
}
