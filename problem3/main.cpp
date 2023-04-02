// https://spring23.teamscode.org/contest/3/problem/3
#include <iostream>
#include <cmath>

using namespace std;

#define MAX_INT 2147483647

int main()
{
    int n, k;
    long long perm;
    cin >> n >> k;
    perm = pow(k + 1, n);
    cout << perm - 1;
    return 0;
}