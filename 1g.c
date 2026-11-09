#include <stdio.h>

int main() {
    int x = 5;
    int y = ++x; // x is increased first, then y gets 6
    printf("x = %d, y = %d\n", x, y); // x = 6, y = 6

    int a = 5;
    int b = a++; // b gets 5 first, then a is increased
    printf("a = %d, b = %d\n", a, b); // a = 6, b = 5
    return 0;
}