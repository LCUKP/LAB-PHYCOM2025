#include <stdio.h>
#include <math.h>

int main() {
    int n, smallest;
    scanf("%d", &n);
    double v[n], sum = 0, sd = 0, avg = 0, tmp = 0;
    for(int i = 0; i<n; i++){
        scanf(" %lf", &v[i]);
        sum += v[i];
    }
    avg = sum/n;

    for(int i = 0; i < n -1; i++){
        smallest = i;
        for(int j = i+ 1; j < n; j++){
            if (v[j] < v[smallest]){
                smallest = j;
            }
        }
        tmp = v[i];
        v[i] = v[smallest];
        v[smallest] = tmp;
    }
    
    tmp = 0;

    for(int i = 0; i<n; i++){
        tmp += pow((v[i] - avg), 2);
}

    sd = sqrt(tmp / n);

    printf("%.2lf\n", avg);
    (n % 2 == 0) ? printf("%.2lf\n", (v[(n/2)-1]+v[(n/2)])/2) : printf("%.2lf\n", v[n/2]);
    printf("%.2lf", sd);
    return 0;
}