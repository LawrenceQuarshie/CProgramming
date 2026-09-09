#include <stdio.h>

int main() {
    int oldprice = 2700;
    int newprice = 3600;

    oldprice = newprice;

    printf("%d\n", oldprice);
    return 0;
}