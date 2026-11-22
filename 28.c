#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    // (a > 1 && b < 0) returns 0 because 5 is greater than 1 but b is not less than 0 is that becomes 0 and '!' makes it 1
    printf("%d\n", !(a > 1 && b < 0));
    return 0;
}