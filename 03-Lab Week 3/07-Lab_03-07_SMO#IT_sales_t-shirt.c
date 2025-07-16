#include "stdio.h"

int main() {
    double old, dis, count;
    scanf(" %lf %lf %lf", &old, &dis, &count);

    double result = ((old - (old * (dis/100))) * count);

    printf("%.2lf", result);

    return 0;
}