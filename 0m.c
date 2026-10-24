#include <stdio.h>

int main() {
    int a = 5;
    int b = 4;

    printf("%d\n", a / b); // results expected to 1.25 (float) but since we are using int format we end up with 1
    return 0;
}