#include <bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("input.txt", "r", stdin);
    string str;
    cin>>str;
    int n=str.length();
    int r,c;
    if(n==1 || n==4 || n==9 || n==16 || n==25 || n==36 || n==49 || n==64 || n==81)
    {
        r=sqrt(n);
        c=r;
    }
    else
    {
        r=sqrt(n);
        c=r+1;
    }
    if(r*c<n)
        r=c;
    char arr[r][c],k=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(k<n)
            {
                arr[i][j]=str[k];
                k++;
            }
            else
            {
                arr[i][j]='*';
                k++;
            }
        }
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(arr[j][i]!='*')
                cout<<arr[j][i];
        }
        if(i!=c-1)
            cout<<" ";
    }
    return 0;
}

