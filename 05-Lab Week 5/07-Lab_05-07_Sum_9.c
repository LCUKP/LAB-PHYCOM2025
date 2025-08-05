#include <stdio.h>

int main(){
    int n, sum;
    scanf("%i", &n);
    
    while (n != -9)
    {
        sum += n;
        scanf("%i", &n);
    }
    printf("%i", sum);

    return 0;
}