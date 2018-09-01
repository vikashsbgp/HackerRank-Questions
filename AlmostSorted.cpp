#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y;
    vector<int> ind;
    int arr[n+1],arr1[n+1],ans=0,flag=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    if(is_sorted(arr+1,arr+n+1))
        cout<<"yes";
    else if(n==2)
        cout<<"yes\n"<<"swap 1 2";
    else
    {
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(arr[i]>arr[j])
                {
                    //cout<<i<<" ";
                    ind.push_back(i);
                   // break;
                }
                break;
            }
            if(ind.size()==2)
            {
                swap(arr1[ind[0]],arr1[ind[1]+1]);
                if(is_sorted(arr1+1,arr1+n+1))
                {
                    ans=1;
                    cout<<"yes\n"<<"swap "<<ind[0]<<" "<<ind[1]+1;
                    break;
                }
            }
            else if(i==n-1)
            {
                swap(arr1[ind[0]],arr1[ind[0]+1]);
                if(is_sorted(arr1+1,arr1+n+1))
                {
                    cout<<"yes\n"<<"swap "<<ind[0]<<" "<<ind[0]+1;
                    ans=1;
                    break;
                }
            }
        }
        if(ans==0)
        {
            for(int i=1;i<n;i++)
            {
                x=i;
                while(arr[i]>arr[i+1])
                {
                    i++;
                    flag=1;
                }
                if(flag==1)
                {
                    y=i;
                    break;
                }
            }
            if(y==n+1)
                y--;
            reverse(arr+x,arr+y+1);
            //for(int i=1;i<=n;i++)
              //  cout<<arr[i];
             //cout<<x<<y;
             if(is_sorted(arr+1,arr+n+1))
                cout<<"yes\n"<<"reverse "<<x<<" "<<y;
            else
                cout<<"no";
        }
    }
    return 0;

}
