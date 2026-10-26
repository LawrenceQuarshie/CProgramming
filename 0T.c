#include <stdio.h>

int main() {
    // set the maximum possible score to 500
    int maxscore = 500;

    // the actual score of the user
    int userscore = 423;

    float percentage = (float) userscore / maxscore * 100;

    printf("User's percentage is %.2f\n", percentage);
    return 0;
}