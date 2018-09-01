#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int arr[6][6];
    int arr1[25], arr2[17],arr3[17];
    arr1[0] = 0;
    arr2[0] = 0;
    arr3[0] = 0;
    for(int i = 0;i < 6;i++)
    {
        for(int j = 0;j < 6;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=1;
    for(int i = 0;i < 6;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            arr1[k] = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            k++;
        }
    }
    k = 1;
    for(int i = 1;i < 5;i++)
    {
        for(int j = 1;j < 5;j++)
        {
            arr2[k] = arr[i][j];
            k++;
        }
    }

    for(int i =1;i<=16;i++)
    {
        arr3[i] = arr1[i] + arr1[i+8] + arr2[i];
    }
    cout<<*max_element(arr3+1,arr3+17);
}
