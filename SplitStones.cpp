#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
			for(int i=0;i<3;i++)
				cin>>arr[i];
			int x,y;
			cin>>x>>y;
			sort(arr,arr+3);
			int mxm=max(x,y);
			if(arr[0]+arr[1]+arr[2]!=(x+y))
			{
				cout<<"NO";
			}
			else
			{
				if(mxm==arr[2])
				{
					if(arr[0]+arr[1]==x || arr[0]+arr[1]==y)
						cout<<"YES";
					else
						cout<<"NO";
				}
				else if(mxm>arr[2])
				{
					int temp=mxm-arr[2];
					if(temp+arr[0]+arr[1]==x || temp+arr[0]+arr[1]==y)
						cout<<"YES";
					else
						cout<<"NO";
				}
			}
			if(t!=0)
                cout<<"\n";
    }
    return 0;
}
