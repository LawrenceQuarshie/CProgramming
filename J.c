#include <stdio.h>

int main() {
    // specs for circuit breaker
    int breakercurrent = 20; // breaker current
    int breakervoltage = 120; // breaker voltage
    float breakerprice = 8.48; // breaker price in USD
    char breakertype = 'B'; // B - fast tripping; C - slow tripping; D - slowest tripping

    printf("Circuit breaker current: %d\n", breakercurrent);
    printf("Circuit breaker voltage: %d\n", breakervoltage);
    printf("Circuit breaker price: %f\n", breakerprice);
    printf("Circuit breaker type: %c\n", breakertype);
    return 0;
}