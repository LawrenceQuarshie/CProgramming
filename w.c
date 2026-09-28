#include <stdio.h>

int main() {
    // good variable name
    int minutesperhour = 60;

    // ok, but not so easy to understand what m actually is
    int m = 60;

    printf("%d\n", minutesperhour);
    printf("%d\n", m);
    return 0;
}