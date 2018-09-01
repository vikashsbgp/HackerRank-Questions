#include<iostream>
#include<algorithm>
#include<vector>
#include<array>

using namespace std;

int main()
{
   // int n;
    //cin>>n;
    array<int,5> arr = {100,50,40,20,10};
    auto q=lower_bound(arr.begin(),arr.end(),50);
    cout<<q-arr.begin();
    return 0;
}
