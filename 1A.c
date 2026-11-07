#include <stdio.h>

int main() {
    int a = 4;
    int b = 2;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    int c = 3;
    ++c;
    printf("%d\n", c);
    --c;
    printf("%d\n", c);

    return 0;
}