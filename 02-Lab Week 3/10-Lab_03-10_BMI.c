#include "stdio.h"

int main() {
    float w, h;
    scanf(" %f %f", &h, &w);

    float BMI = w / ((h/100)*(h/100));
    printf("%f", BMI);

    return 0;
}