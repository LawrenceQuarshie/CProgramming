#include <stdio.h>

int main() {
    // create integer values
    int current = 10;
    int voltage = 220;
    int power;

    // calculate the value of power used
    power = current * voltage;

    // print the values of the variables
    printf("%d\n", current);
    printf("%d\n", voltage);
    printf("%d\n", power);
    return 0;
}