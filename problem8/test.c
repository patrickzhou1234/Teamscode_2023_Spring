#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // read in the number of test cases
    while (t--) { // loop through all test cases
        int x, y;
        scanf("%d %d", &x, &y); // read in the x and y coordinates
        int bricks = y/2; // number of full bricks crossed vertically
        if (x % 2 == 1 && y % 2 == 1) { // if both x and y are odd
            bricks += (x - 1)/2 + 1; // add half the remaining bricks horizontally, plus 1 for the starting brick
        } else {
            bricks += (x - 1)/2; // add half the remaining bricks horizontally
        }
        printf("%d\n", bricks); // print the total number of bricks crossed
    }
    return 0;
}