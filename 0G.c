#include <stdio.h>

int main() {
    float v1 = 4.16e3; // medium voltage
    double v2 = 23E4; // high voltage

    printf("%f\n", v1);
    printf("%lf\n", v2);
    return 0;
}