#include <iostream>

using namespace std;

int pos=0,c=0,n;
int count_U(int sum, int *arr, int k);
int count_D(int sum, int *arr, int k);

int main()
{
    int sum=0;
    cin>>n;
    string s;
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
            arr[i]=1;
        else
            arr[i]=-1;
    }
    int k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            sum=1;
            i=count_U(sum,arr,i);
        }
        else
        {
            sum=-1;
            i=count_D(sum,arr,i);
        }
    }
    cout<<c;
    return 0;
}
int count_U(int sum, int *arr, int k)
{
        for(int i=k+1;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0)
            {
                pos=i;
                break;
            }
        }
        return pos;
}

int count_D(int sum,int *arr, int k)
{
        for(int i=k+1;i<n;i++)
        {
            sum+=arr[i];
            if(sum==0)
            {
                c++;
                pos=i;
                break;
            }
        }
        return pos;
}

