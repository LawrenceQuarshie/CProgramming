#include <stdio.h>

int main() {
    // create variables for power
    int current = 3;
    int voltage = 230;
    int power;

    // power used by sharkninja vacuum cleaner
    power = current * voltage;

    printf("Current is: %d\n", current);
    printf("Voltage is: %d\n", voltage);
    printf("Power used by the Shark Ninja is: %d\n", power);
    return 0;
}