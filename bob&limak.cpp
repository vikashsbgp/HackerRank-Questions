#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,sum_l=0,sum_b=0;
        cin>>a>>b;
        vector<int> vec;
        for(int i=0;;i++)
        {
            sum_l+=2*i+1;
            sum_b+=pow(2,i+1);
            if(sum_l>a)
            {
                cout<<"BOB";
                break;
            }
            else if(sum_b>b)
            {
                cout<<"LIMAK";
                break;
            }
        }
    }
}
