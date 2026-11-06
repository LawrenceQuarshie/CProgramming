#include <stdio.h>

int main() {
    int total1 = 23 + 6;
    int total2 = total1 + 5;
    int total3 = total2 + total2;

    printf("%d\n", total1);
    printf("%d\n", total2);
    printf("%d\n", total3);
    return 0;
}