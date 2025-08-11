#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sizeX[4], sizeY[4];
    int x, y;

    scanf("%s", sizeX);
    scanf("%s", sizeY);

    x = atoi(sizeX +1);
    y = atoi(sizeY +1);

    int result = (int)pow(2, y - x);

    printf("%d", result);

    return 0;
}