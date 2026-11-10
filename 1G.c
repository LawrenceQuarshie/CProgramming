#include <stdio.h>

int main() {
    int x = 6;
    int y = x++;
    printf("x = %d, y = %d\n", x, y);
    
    int a = 6;
    int b = ++a;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}