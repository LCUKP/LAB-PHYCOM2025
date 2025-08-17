#include <stdio.h>
#include <math.h>

int main(){
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    double z = sqrt(pow(x, 2) + pow(y, 2));
    printf("sqrt(%lld^2+%lld^2)=%.2lf", x, y, z);

    return 0;
}