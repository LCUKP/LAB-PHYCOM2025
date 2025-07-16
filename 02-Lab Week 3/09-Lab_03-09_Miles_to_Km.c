#include "stdio.h"

int main() {
    float mi;
    scanf(" %f", &mi);

    float km = mi * 1.60934;
    printf("%.2f", km);

    return 0;
}