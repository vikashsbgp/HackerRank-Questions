#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans = 0;;
        cin>>n;
        int arr[n+1];
        int dif[n+1];
        dif[0] = 0;
        arr[0] = 1;

        for(int i = 1;i <= n;i++)
        {
            cin>>arr[i];
            dif[i] = arr[i] - i;
        }

        if(*max_element(dif + 1, dif + n + 1) > 2)
            cout<<"Too chaotic";

        else
        {
            for(int i =1;i <= n;i++)
            {
                if(dif[i] > 0)
                    ans += dif[i];
            }
            cout<<ans;
        }

        if(t!=0)
            cout<<"\n";

    }
    return 0;
}
