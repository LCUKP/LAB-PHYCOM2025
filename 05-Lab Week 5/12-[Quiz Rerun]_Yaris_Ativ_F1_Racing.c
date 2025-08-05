#include <stdio.h>

int main() {
    int s,r,sc,count;
    float dis;
    scanf("%d %f %d %d", &s, &dis, &r, &sc);
    count += (s == 0) ? 1 : 0;
    count += (r <= 2) ? 1 : 0;
    count += (r - sc < 2) ? 1 : 0;
    count += (dis >= 1 ) ? 1 : 0;

    if (count == 0) {
        printf("DRS allowed");
    } else {
        printf("DRS not allowed %d", count);
    }

    return 0;
}
