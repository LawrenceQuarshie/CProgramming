#include <stdio.h>

int main() {
    int devices = 0;

    // New devices added
    devices++;
    devices++;
    devices++;

    printf("%d\n", devices); // 3

    // Old devices removed
    devices--;

    printf("%d\n", devices); // 2
    return 0;
}