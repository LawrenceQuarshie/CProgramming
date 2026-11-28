#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 15;
    int b = 7;

    bool isgreater = a > b;

    if (isgreater) {
        printf("a is greater than b\n");
    }
    return 0;
}