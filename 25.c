#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;

    // Returns 1 (true) because one of the conditions is true (5 is greater than 3, but 5 is not less than 4)
    printf("%d\n", x > 3 || x < 4);
    return 0;
}