#include <stdio.h>

int main() {
    int a = 7; // 1st number
    int b = 3; // 2nd number
    float c = (float) a / b; // converts a / b which is int into float

    printf("%f\n", c);
    return 0;
}