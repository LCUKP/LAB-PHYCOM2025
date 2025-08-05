#include <stdio.h>

int main(){
    int n, y, m = 1;
    scanf("%i", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ( (i == j) || (n - j == i - 1)) {
                printf("-");
            } else {
                printf("#");
            }
        }
        if (i != n) printf("\n");
    }

    return 0;
}