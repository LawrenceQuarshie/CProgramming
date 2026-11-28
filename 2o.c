#include <stdio.h>
#include <stdbool.h>

int main() {
    int charge = 45;

    if (charge < 100) {
        printf("Battery still charging.\n");
    } else {
        printf("Fully charged.\n");
    }
    return 0;
}