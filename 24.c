#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;

    // Returns 1 (true) because 1 is greater than 0 AND 1 is less than 2
    printf("%d\n", a > 0 && a < 2);
    return 0;
}