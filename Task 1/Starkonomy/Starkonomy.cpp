#include <iostream>
#include <cmath>
using namespace std;
bool behtarHast(int tool1, long long majmoo1, long long majmooMoraba1, int tool2, long long majmoo2, long long majmooMoraba2)
{
    double miangin1 = (double)majmoo1 / tool1;
    double miangin2 = (double)majmoo2 / tool2;
    if (miangin1 > miangin2) return true;
    if (miangin1 < miangin2) return false;
    double enheraf1 = sqrt((double)majmooMoraba1 / tool1 - miangin1 * miangin1);
    double enheraf2 = sqrt((double)majmooMoraba2 / tool2 - miangin2 * miangin2);
    return enheraf1 < enheraf2;
}
int main()
{
    int tedadSal;
    cin >> tedadSal;
    int sood[100];
    for (int i = 0; i < tedadSal; i++)
    {
        cin >> sood[i];
    }
    int tool[100];
    long long majmoo[100];
    long long majmooMoraba[100];
    int ghabli[100];
    for (int i = 0; i < tedadSal; i++)
    {
        tool[i] = 1;
        majmoo[i] = sood[i];
        majmooMoraba[i] = sood[i] * sood[i];
        ghabli[i] = -1;
    }
    int maxtool = 1;
    for (int i = 0; i < tedadSal; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (sood[j] < sood[i])
            {
                if (tool[j] + 1 > tool[i])
                {
                    tool[i] = tool[j] + 1;
                    majmoo[i] = majmoo[j] + sood[i];
                    majmooMoraba[i] = majmooMoraba[j] + sood[i] * sood[i];
                    ghabli[i] = j;
                }
                else if (tool[j] + 1 == tool[i])
                {
                    long long majmooJadid = majmoo[j] + sood[i];
                    long long majmooMorabaJadid = majmooMoraba[j] + sood[i] * sood[i];
                    int toolJadid = tool[j] + 1;
                    if (behtarHast(toolJadid, majmooJadid, majmooMorabaJadid, tool[i], majmoo[i], majmooMoraba[i]))
                    {
                        tool[i] = toolJadid;
                        majmoo[i] = majmooJadid;
                        majmooMoraba[i] = majmooMorabaJadid;
                        ghabli[i] = j;
                    }
                }
            }
        }
        if (tool[i] > maxtool)
        {
            maxtool = tool[i];
        }
    }
    int behtarinEnd = 0;
    bool avalin = true;
    for (int i = 0; i < tedadSal; i++)
    {
        if (tool[i] == maxtool)
        {
            if (avalin || behtarHast(tool[i], majmoo[i], majmooMoraba[i], tool[behtarinEnd], majmoo[behtarinEnd], majmooMoraba[behtarinEnd]))
            {
                behtarinEnd = i;
                avalin = false;
            }
        }
    }
    int behtarin[100];
    int toolBehtarin = 0;
    int index = behtarinEnd;
    while (index != -1)
    {
        behtarin[toolBehtarin] = sood[index];
        toolBehtarin++;
        index = ghabli[index];
    }
    for (int i = 0; i < toolBehtarin / 2; i++)
    {
        int temp = behtarin[i];
        behtarin[i] = behtarin[toolBehtarin - 1 - i];
        behtarin[toolBehtarin - 1 - i] = temp;
    }
    for (int i = 0; i < toolBehtarin; i++)
    {
        cout << behtarin[i];
        if (i < toolBehtarin - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
