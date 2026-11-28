#include <stdio.h>

int main() {
    int time = 20;

    bool isday = time < 18;

    if (isday) {
        printf("Good day. \n");
    } else {
        printf("Good evening. \n");
    }
    return 0;
}