#include <stdio.h>

int main() {
    float n1, n2, n3, tmp1, tmp2;
    scanf(" %f %f %f", &n1, &n2, &n3);

    if (n1 < n2) {
        tmp1 = n1;
        tmp2 = n2;
        n1 = tmp2;
        n2 = tmp1;
    }

    if (n2 < n3) {
        tmp1 = n2;
        tmp2 = n3;
        n2 = tmp2;
        n3 = tmp1;
    }

    if (n1 < n2) {
        tmp1 = n1;
        tmp2 = n2;
        n1 = tmp2;
        n2 = tmp1;
    }

    printf("%.2f", n2);

    return 0;
}