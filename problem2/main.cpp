// https://spring23.teamscode.org/contest/3/problem/2
#include <iostream>

using namespace std;

#define MAX_INT 2147483647

int main()
{
    int n, i, run = 1, ct = 0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i + 1] <= a[i])
        {
            run = 1;
        }
        if (a[i + 1] > a[i])
        {
            run++;
        }
        if (run == 3)
        {
            ct++;
        }
    }
    cout << ct;
    return 0;
}