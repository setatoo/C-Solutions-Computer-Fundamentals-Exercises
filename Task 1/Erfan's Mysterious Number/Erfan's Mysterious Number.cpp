#include <iostream>
using namespace std;
int main()
{
    int numDigits, mabna, majmoo;
    long long karanpaein, karanbala;
    cin >> numDigits >> mabna >> majmoo >> karanpaein >> karanbala;
    int nesfe = (numDigits + 1) / 2;
    long long nesfemin, nesfemax;
    long long tavanmabna[11] = {1};
    for (int i = 1; i <= nesfe; i++)
    {
        tavanmabna[i] = tavanmabna[i - 1] * mabna;
    }
    if (numDigits == 1)
    {
        nesfemin = 0;
        nesfemax = mabna - 1;
    }
    else
    {
        nesfemin = tavanmabna[nesfe - 1];
        nesfemax = tavanmabna[nesfe] - 1;
    }
    long long bestjavab = -1;
    for (long long nesfenumber = nesfemin; nesfenumber <= nesfemax; nesfenumber++)
    {
        int raghamnesfe[5];
        long long temp = nesfenumber;
        for (int i = nesfe - 1; i >= 0; i--)
        {
            raghamnesfe[i] = temp % mabna;
            temp /= mabna;
        }
        int majmooenesfe = 0;
        for (int i = 0; i < nesfe; i++)
        {
            majmooenesfe += raghamnesfe[i];
        }
        int kolanmajmoo;
        if (numDigits % 2 == 0)
        {
            kolanmajmoo = 2 * majmooenesfe;
        }
        else
        {
            kolanmajmoo = 2 * majmooenesfe - raghamnesfe[nesfe - 1];
        }
        if (kolanmajmoo != majmoo) continue;
        int tamamargham[10];
        for (int i = 0; i < nesfe; i++)
        {
            tamamargham[i] = raghamnesfe[i];
            tamamargham[numDigits - 1 - i] = raghamnesfe[i];
        }
        long long mabnayedah = 0;
        for (int i = 0; i < numDigits; i++)
        {
            mabnayedah = mabnayedah * mabna + tamamargham[i];
            if (mabnayedah > karanbala) break;
        }
        if (mabnayedah < karanpaein || mabnayedah > karanbala) continue;
        if (bestjavab == -1 || mabnayedah < bestjavab)
        {
            bestjavab = mabnayedah;
        }
    }
    if (bestjavab != -1)
    {
        cout << bestjavab << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
