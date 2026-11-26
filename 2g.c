#include <stdio.h>

int main() {
    printf("%d\n", 8 == 8); // Returns 1 (true) because 8 is equal to 8
    printf("%d\n", 8 == 12); // Returns 0 (false) because 8 is not equal to 12
    printf("%d\n", 8 == 9); // Returns 0 (false) because 8 is not equal to 9
    
    return 0;
}