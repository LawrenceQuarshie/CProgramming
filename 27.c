#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;

    // Returns 0 (false) because ! (not) is used to reverse the results
    printf("%d\n", !(x > 3 && x < 10));
    return 0;
}