#include<iostream>
#include<algorithm>

using namespace std;
 void mini(int a, int *b,int c);

 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         string str;
         cin>>str;
         string str1;
         int n=str.length();
         int arr[n],k=0,flag=0;

         for(int i=0;i<n;i++)
            arr[i]=(int)str[i];

         /*for(int i=0;i<n;i++)
            cout<<arr[i]<<"\t";*/

         for(int i=n-2;i>=0;i--)
         {
             if(arr[i]<arr[i+1])
             {
                  k=i+1;
                 mini(i,arr,n);
                 flag=1;
                 break;
             }
         }
        if(flag==0)
            cout<<"no answer";
        else {
         sort(arr+k,arr+n);

         for(int i=0;i<n;i++)
            str[i]=(char)arr[i];

        cout<<str;
        }
        /* if(str==str1)
            cout<<"no answer";
         else
            cout<<str1;*/
         if(t!=0)
            cout<<"\n";
     }
 }
 void mini(int a, int *b, int size)
 {
     int temp=99999,index;

     for(int i=a+1;i<size;i++)
     {
         if(b[a]<b[i])
         {
             if((b[i]-b[a])<temp)
             {
                 temp=b[i]-b[a];
                 index=i;
             }
         }
     }
     temp=b[a];
     b[a]=b[index];
     b[index]=temp;
 }
