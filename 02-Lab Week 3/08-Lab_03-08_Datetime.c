#include "stdio.h"

int main() {
    int sec;
    scanf(" %d", &sec);

    int ss = sec / 60;
    int s = sec % 60;
    int m = ss % 60;
    int h = (ss / 60) % 24;
    int d = (ss / 60) / 24;

    printf("%d s = %d d %d h %d m %d s", sec, d, h, m, s);

    return 0;
}