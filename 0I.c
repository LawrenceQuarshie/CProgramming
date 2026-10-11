#include <stdio.h>

int main() {
    float screenheight = 6.41;

    printf("%f\n", screenheight); // default will show 6 digits after the decimal point
    printf("%.1f\n", screenheight); // only show 1 digit
    printf("%.2f\n", screenheight); // only show 2 digit
    printf("%.4f\n", screenheight); // only show 4 digit
    return 0;
}