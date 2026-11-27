#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 20;
    int y = 18;

    bool isgreater = x > y;

    if (isgreater) {
        printf("x is greater than y\n");
    }
    return 0;
}