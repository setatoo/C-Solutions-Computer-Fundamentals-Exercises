#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long long int n,k;
    cin>>k>>n;

    long long int hasel=1;

    for(int i=1;i<=n;i++) {
        long long int d = (k + i);
        hasel =hasel* d / i;
    }
    cout<<hasel<<"\n";
    return 0;
}
