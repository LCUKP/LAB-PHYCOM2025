#include <stdio.h>
#include <math.h>

int main() {
    int ongsa, u;
    scanf(" %d %d", &ongsa, &u);
    double PI = 3.141592653589793;
    double h = ((pow(u, 2) * pow(sin((ongsa * PI) / 180.0), 2)) / (2 * 9.81));
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", ongsa, u, h);
    return 0;
}