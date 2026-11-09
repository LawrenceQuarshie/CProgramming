#include <stdio.h>

int main() {
    int peopleinroom = 0;

    // 3 people enter
    peopleinroom++;
    peopleinroom++;
    peopleinroom++;

    printf("%d\n", peopleinroom); // 3

    // 1 person leaves
    peopleinroom--;

    printf("%d\n", peopleinroom); // 2
    return 0;
}