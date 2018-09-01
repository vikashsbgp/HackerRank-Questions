#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(abs(x-z)>abs(y-z))
            cout<<"Cat B";
        else if(abs(x-z)<abs(y-z))
            cout<<"Cat A";
        else
            cout<<"Mouse C";
    }
    return 0;
}
