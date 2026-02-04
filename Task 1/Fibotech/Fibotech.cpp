#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
long long unsigned n;
cin>>n;
    while(n>0) {
        unsigned a = 1, b = 1, c=2;
        while (c <= n) {
            a = b;
            b = c;
            c = a + b;
        }
        cout<<b<<"\n";
        n =n- b;
    }
}
