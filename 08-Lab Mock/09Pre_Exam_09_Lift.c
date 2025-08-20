#include <stdio.h>

int main() {
    int n, age, safe = 0;
    float sw, w, sum = 0;
    scanf("%d %f", &n, &sw);

    for(int i = 0; i < n; i++){
        scanf("%d %f", &age, &w);
        if (age >= 12) safe = 1;
        sum += w;
    }
    if (n == 0){
        printf("Safe");
    } else if ((sum > sw) || (safe == 0)){
        printf("Not Safe");
    } else{
        printf("Safe");
    }

    return 0;
}