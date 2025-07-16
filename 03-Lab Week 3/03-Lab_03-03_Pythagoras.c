#include "stdio.h"
#include "math.h"

int main() {
    float n1, n2;
    scanf(" %f %f", &n1, &n2);
    double result = sqrt(pow(n1,2) + pow(n2,2));
    printf("%.2lf\n", result);

    return 0;
}