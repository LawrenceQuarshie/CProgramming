#include <stdio.h>

int main() {
    // good variable name
    int clocktime = 60;

    // okay, but not so easy to understand what t actually is
    int t = 60;

    printf("%d\n", clocktime);
    printf("%d\n", t);
    return 0;
}