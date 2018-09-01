#include <gmpxx.h>
#include <iostream>

using namespace std;
int main()
{
    mpz_class u = 1;
    int n;
    cin>>n;
    for(unsigned i = 1; i <= n; ++i)
            u *= i;

    cout<<u;
    return 0;
}
