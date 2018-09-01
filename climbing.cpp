#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    //freopen("input.in","r",stdin);
    int n,ind,count=0;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>ind;
        vec.push_back(ind);
        if(i>0 && vec[i-1]==vec[i])
            count++;
    }
    int m,k=0;
    cin>>m;
    int arr2[m],arr3[m];
    fill(arr3,arr3+m,0);
    for(int i=0;i<m;i++)
        cin>>arr2[i];
    unique(vec.begin(),vec.end());
    int arr1[n];
    for(int i=0;i<vec.size()-count;i++)
        arr1[i]=vec[i];
    reverse(arr1,arr1+n-count);
    for(int i=0;i<m;i++)
    {
        if(binary_search(arr1,arr1+vec.size()-count,arr2[i]))
        {
            arr3[i]=distance(vec.begin(),find(vec.begin(),vec.end(),arr2[i]))+1;
        }
    }

    for(int i=0;i<m;i++)
    {
        if(arr3[i]==0)
        {
                if(arr2[i]>vec[0])
                    arr3[i]=1;
            else
            {
                for(int j=1;j<vec.size()-count;j++){
                    if(arr2[i]<vec[j-1] && arr2[i]>vec[j])
                    {
                        arr3[i]=j+1;
                        break;
                    }
                    else if(j==vec.size()-count-1)
                        arr3[i]=vec.size()-count+1;}
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<arr3[i];
        if(i<m-1)
            cout<<endl;
    }
    return 0;
}