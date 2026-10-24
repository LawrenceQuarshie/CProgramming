#include <stdio.h>

int main() {
    int normalint = 5678;
    double normaldouble = 0.01;
    
    short int small = -101;
    unsigned int count = 27;
    long int big = 2100210016;
    long long int verybig = 1900129016501023165;
    unsigned long long int huge = 10971550900115030045U;
    long double precise = 6.719002399200003100033994999L;

    printf("Normal int: %d\n", normalint);
    printf("Normal double: %lf\n", normaldouble);
    printf("Small: %hd\n", small);
    printf("Count: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very big: %lld\n", verybig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %.12Lf\n", precise);
    return 0;
}