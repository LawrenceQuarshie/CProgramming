#include <stdio.h>

int main() {
    int myage = 25;
    int votingage = 18;

    if (myage >= votingage) {
        printf("Old enough to vote.\n");
    } else {
        printf("Not old enough to vote.\n");
    }
    return 0;
}