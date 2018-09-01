#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int day1,mnth1,year1,day2,mnth2,year2;
    cin>>day1>>mnth1>>year1>>day2>>mnth2>>year2;
    int tmp=0;
    if(year1<=year2 || mnth1<=mnth2 || day1<=day2)
        cout<<"0";
   else if(year1!=year2)
        cout<<"10000";
    else if(mnth1!=mnth2)
    {
         tmp=mnth1-mnth2;
        cout<<500*tmp;
    }
    else
    {
        tmp=day1-day2;
        cout<<15*tmp;
    }
    return 0;
}
