#include <stdio.h>
#include <stdbool.h> // Import the boolean header file

int main() {
    bool isdevicenew = 1;
    bool iswifipresent = 0;

    printf("%d\n", isdevicenew); // Returns 1 (true)
    printf("%d\n", iswifipresent); // Returns 0 (false)
    return 0;
}