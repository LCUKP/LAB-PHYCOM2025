#include <stdio.h>
 
int main() {
    int n,c=0;
    scanf("%d", &n);
    float t = 0, s = 0;
    scanf("%f", &t);
    for(int i = 0; i<n; i++){
        scanf("%f", &s);
        if (t > s) {
            c++;
        }
    }
    printf("%d", c);
}