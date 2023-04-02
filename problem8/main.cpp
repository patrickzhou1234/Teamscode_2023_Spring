// https://spring23.teamscode.org/contest/3/problem/8
#include <iostream>
#include <cmath>

using namespace std;

#define MAX_INT 2147483647

struct path
{
    int x, y;
};

int main()
{
    int t, i;
    double len, ratio;
    path paths[t];
    for (i = 0; i < t; i++)
    {
        cin >> paths[i].x >> paths[i].y;
        if (paths[i].x >= paths[i].y)
        {
            ratio = (double)paths[i].x / paths[i].y;
            for (i = 0; i < paths[i].y; i++)
            {
                        }
        }
        else
        {
            len = paths[i].y;
            ratio = paths[i].x / paths[i].y;
        }
    }
    system("pause");
    return 0;
}