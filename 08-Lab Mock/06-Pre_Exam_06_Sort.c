#include <stdio.h>

int main(){
    int n, smallest;
    scanf("%d", &n);
    double v[n], tmp;

    for(int i = 0; i<n; i++){
        scanf(" %lf", &v[i]);
    }
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

    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", v[i]);
    }
    return 0;
}