#include <stdio.h>

int fibonacci(int n){

    if (n < 1) {
        return n;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("method = %d", fibonacci(n));

    return 0;
}