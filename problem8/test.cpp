#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        // calculate the number of bricks passed in x and y directions
        long long bricks_x = ceil(abs(x) / 2.0);
        long long bricks_y = ceil(abs(y) / 2.0);

        // the maximum of the two values will be the answer
        long long ans = max(bricks_x, bricks_y);
        cout << ans << endl;
    }

    return 0;
}
