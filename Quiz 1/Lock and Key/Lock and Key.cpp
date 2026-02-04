#include <iostream>
using namespace std;
int main()
{
    int tedad;
    cin >> tedad;
    int araye[200];
    for(int i = 0; i < tedad; i++)
    {
        cin >> araye[i];
    }
    int moves = 0;
    for(int i = 0; i < tedad; i += 2)
    {
        int a = araye[i];
        int b = araye[i+1];
        int joft_mikhammmm;
        if(a % 2 == 0)
        {
            joft_mikhammmm = a + 1;
        }
        else
        {
            joft_mikhammmm = a - 1;
        }
        if(b != joft_mikhammmm)
        {
            for(int j = i + 2; j < tedad; j++)
            {
                if(araye[j] == joft_mikhammmm)
                {
                    int temp = araye[i+1];
                    araye[i+1] = araye[j];
                    araye[j] = temp;
                    moves++;
                    break;
                }
            }
        }
    }
    cout << moves;
    return 0;
}
