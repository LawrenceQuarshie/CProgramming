#include <stdio.h>

int main() {
    int myage = 25;
    int votingage = 18;

    printf("%d\n", myage >= votingage); // Returns 1 (true), meaning 25 year olds are allowed to vote
    return 0;
}