#include <stdio.h>

int main() {
    int dclogicvolt = 5;

    printf("%d\n", dclogicvolt <= 5); // 1 (true) DC logic 1
    printf("%d\n", dclogicvolt < 5); // 0 (false)
    return 0;
}