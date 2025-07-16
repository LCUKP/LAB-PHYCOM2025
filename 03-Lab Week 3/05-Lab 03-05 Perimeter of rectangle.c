#include "stdio.h"

int main() {
    double n1, n2;
    scanf(" %lf %lf", &n1, &n2);

    double result = (n1 * 2) + (n2 * 2);

    printf("Perimeter of rectangle = %.4lf units", result);

    return 0;
}