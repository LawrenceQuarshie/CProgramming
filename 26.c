#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;

    // Returns 1 (true) because one of the conditions is true (5 is less than 7 but 5 is less than 27)
    printf("%d\n", a > 7 || a < 27);
    return 0;
}