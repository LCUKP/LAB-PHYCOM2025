#include <stdio.h>

int main(){
    int n;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18}, lenM = 8;
    int N[] = {1, 3, 9, 7, 11, 15, 19}, lenN = 7;
    
    do {
        scanf("%d", &n);
    } while (n < 1 || n > 20);

    for (int i = 0; i < lenM; i++) {
        if (M[i] == n) {
            printf("%d is in M at index [%d]", n, i);
            return 0;
        }
    }

    for (int j = 0; j < lenN; j++) {
        if (N[j] == n) {
            printf("%d is in N at index [%d]", n, j);
            return 0;
        }
    }

    printf("%d is not in neither M nor N", n);

    return 0;
}