#include <stdio.h>

int main() {
    int isloggedin = 1;
    int isadmin = 0;

    printf("Regular user: %d\n", isloggedin && !isadmin);
    printf("Has access: %d\n", isloggedin || isadmin);
    printf("Not logged in: %d\n", !isloggedin);
    return 0;
}