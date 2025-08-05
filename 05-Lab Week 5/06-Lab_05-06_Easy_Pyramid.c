#include <stdio.h>

int main(){
    int n, y, m = 1;
    scanf("%i", &n);

    for(int i = n; i > 0; i--){
        for(int j = i-1; j > 0; j--){
            printf(" ");
        }
        y = m;
        while (y > 0) {
            printf("*");
            y--;
        }
        m += 2;
        if (i != 1) printf("\n");
    }

    return 0;
}