#include <stdio.h>

int main(){
    int n, m, sum = 0;
    scanf(" %d %d", &n, &m);

    printf("pass : ");
    if(n < m) {
        for (int i = n; i <= m; i++) {
            if(i % 2 == 0){
                printf("%d ", i);
                sum += i;
            }
        }
    } else {
        for (int i = n; i >= m; i--) {
            if(i % 2 == 0){
                printf("%d ", i);
                sum += i;
            }
        }
    }
    printf("\nSum : %d", sum);

    return 0;
}