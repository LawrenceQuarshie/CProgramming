#include <stdio.h>

int main() {
    float myfloatnum = 3.5;

    printf("%f\n", myfloatnum); // default will show 6 digits after the decimal point
    printf("%.1f\n", myfloatnum); // only show 1 digit
    printf("%.2f\n", myfloatnum); // only show 2 digit
    printf("%.4f\n", myfloatnum); // only show 4 digit
    return 0;
}