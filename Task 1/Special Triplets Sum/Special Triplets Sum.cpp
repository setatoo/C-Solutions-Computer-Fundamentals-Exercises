#include <iostream>
using namespace std;
const long long KOSSHER = 1000000007;
int main()
{
    long long N;
    int M;
    cin >> N >> M;
    bool isAval[350001];
    for (int i = 0; i <= M; i++)
        isAval[i] = true;
    isAval[0] = isAval[1] = false;
    for (int i = 2; i * i <= M; i++)
    {
        if (isAval[i])
        {
            for (int j = i * i; j <= M; j += i)
                isAval[j] = false;
        }
    }
    long long javab = 0;
    for (int zart = 2; zart <= M; zart++)
    {
        if (!isAval[zart]) continue;
        for (long long tavando = 1; tavando <= N; tavando = tavando * 2)
        {
            if (tavando * zart > N) break;
            long long maxA = N / (tavando * zart);
            long long tedadA = (maxA + 1) / 2;
            javab = (javab + tedadA) % KOSSHER;
        }
    }
    cout << javab << endl;
    return 0;
}
