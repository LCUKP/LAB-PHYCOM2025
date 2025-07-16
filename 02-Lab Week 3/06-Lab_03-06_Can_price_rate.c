#include "stdio.h"

int main() {
    double price, r, h;
    double pi = 3.14159265359;
    scanf(" %lf %lf %lf", &price, &r, &h);

    double result = pi * ((r/2)*(r/2)) * h;
    double avg = price / result;

    printf("Volume : %.2lfml\n", result);
    printf("Baht/ml : %.4lf", avg);

    return 0;
}