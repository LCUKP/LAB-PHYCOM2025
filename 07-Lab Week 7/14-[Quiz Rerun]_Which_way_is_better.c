#include <stdio.h>

int main() {
    double E20, cost[4], liters[4], dis, sum1 = 0, sum2 = 0, c1 = 0, c2 = 0;
    int ex[4];

    scanf(" %lf", &E20);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &ex[i]);
    }

    for (int i = 0; i < 4; i++) {
        scanf(" %lf", &dis);
        if (ex[i] == 1) {
            liters[i] = 29/dis;
            cost[i] = (liters[i] * E20) + 60;
            sum1 += cost[i];
            c1++;
        } else {
            liters[i] = 25/dis;
            cost[i] = (liters[i] * E20);
            sum2 += cost[i];
            c2++;
        }
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", (i+1), liters[i], cost[i]);
    }

    (c1 != 0) ? printf("Expressway: %.2lf Baht\n", (sum1/c1)) : printf("Expressway: 0.00 Baht\n");
    (c2 != 0) ? printf("Romklao: %.2lf Baht", (sum2/c2)) : printf("Romklao: 0.00 Baht");
    

    return 0;
}