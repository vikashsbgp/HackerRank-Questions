#include<iostream>
#include<limits.h>

using namespace std;

int x,y,z;
void merge(int *a,int p,int q,int r);
void merge_sort(int *a,int p,int r);

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
        cin>>arr[i];
    x=0;
    z=n-1;
  merge_sort(arr,x,z);
  for(int i=0;i>n;i++)
    cout<<arr[i]<<"\t";
}
void merge(int *a,int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    for(int i=0;i<=n1;i++)
        L[i]=*a+i;
     for(int i=q;i<=n2;i++)
        R[i]=*a+i;
    int i=0,j=0;
    for(int k=0;k<r;k++)
    {
        if(L[i]>R[j])
        {
            a[k]=R[j];
            j++;
        }
         if(L[i]<R[j])
        {
            a[k]=L[i];
            i++;
        }
    }
}
void merge_sort(int *a,int p,int r)
{
   if(x<z)
   {
        y=(x+z)/2;
        merge_sort(a,x,y);
        merge_sort(a,y+1,z);
        merge(a,x,y,z);
   }
}
