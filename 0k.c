#include <stdio.h>

int main() {
    // create variables of different data types
    int resistance = 5;
    float current = 1.2;
    float voltage = resistance * current;
    char unit = 'V';

    printf("Value of resistor: %d\n", resistance);
    printf("Current through the circuit: %.1f\n", current);
    printf("Voltage across resistor (load): %.1f %c\n", voltage, unit);
    return 0;
}