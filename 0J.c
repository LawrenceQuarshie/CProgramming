#include <stdio.h>

int main() {
    // create variables of different data types
    int items = 50;
    float costperitem = 9.99;
    float totalcost = items * costperitem;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", costperitem, currency);
    printf("Total cost: %.2f %c\n", totalcost, currency);
    return 0;
}