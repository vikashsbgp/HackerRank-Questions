#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cout << right << setfill(' ') << setw(n);
        cout << string(i, '#') << endl;
    }
    return 0;
}
