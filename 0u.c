#include <stdio.h>

int main() {
    // total installed electricity generation capacity
    int gtotalinstalled = 5260;

    // dependable capacity
    int gdependable = 4856;

    float percentutilization = (float) gdependable / gtotalinstalled * 100;

    printf("Ghana's grid utilization is %.2f\n", percentutilization);
    return 0;
}