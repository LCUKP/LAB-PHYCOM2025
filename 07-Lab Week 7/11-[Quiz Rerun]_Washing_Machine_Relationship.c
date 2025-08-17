#include <stdio.h>

int main() {
    int n, h;
    double blood = 2800, tmp, sum = 0;
    scanf(" %d", &n);
    h = (n*30) / 60;
    while (h > 0) {
        tmp = blood*0.02;
        blood -= tmp;
        sum += tmp;
        h--;
    }

    printf("%.2lf\n", sum);
    (sum < 840) ? printf("Safe") : printf("Danger");
    
    return 0;

}