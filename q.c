#include <stdio.h>

int main() {
    int mynum = 15;
    int myothernum = 23;

    // assign the value of myothernum (23) to mynum
    mynum = myothernum;

    // mynum is now 23 instead of 15
    printf("%d\n", mynum);
    return 0;
}