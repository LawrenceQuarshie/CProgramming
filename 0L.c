#include <stdio.h>

int main() {
    int x = 5;
    int y = 2;

    printf("%d\n", x / y); // results expected to 2.5 (float) but since we are using int format we end up with 2
    return 0;
}