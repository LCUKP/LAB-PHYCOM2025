#include <stdio.h>

int main() {
    int n, n1, n2, result;
    scanf("%d", &n);
    n1 = (n % 1000) * 100;
    n2 = n * 0.001;
    result = n1 + n2;
    printf("%d", result);
    return 0;
}