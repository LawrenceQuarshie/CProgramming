#include <stdio.h>

int main() {
    int passwordlength = 5;

    printf("%d\n", passwordlength >= 8); // false (0) too short
    printf("%d\n", passwordlength < 8); // true (1) needs more characters
    return 0;
}