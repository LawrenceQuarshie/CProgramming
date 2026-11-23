#include <stdio.h>

int main() {
    int ispoweron = 1;
    int hasfault = 0;

    printf("System normal: %d\n", ispoweron && !hasfault);
    printf("Requires attention: %d\n", !ispoweron || hasfault);
    printf("System offline: %d\n", !ispoweron);
    return 0;
}