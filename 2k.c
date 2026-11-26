#include <stdio.h>

int main() {
    int wattage = 2;
    int threshold = 1;

    if(wattage >= threshold) {
        printf("Cannot turn on. Power rating is greater than threshold.\n");
    } else {
        printf("Can operate. Power rating lower than threshold.\n");
    }
    return 0;
}