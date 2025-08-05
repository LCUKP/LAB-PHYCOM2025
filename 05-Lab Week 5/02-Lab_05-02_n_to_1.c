#include <stdio.h>

int main(){
    int n;
    scanf("%i", &n);

    do {
        printf("%d ", n);
        n -= 1;
    } while (n >= 1);

    return 0;
}