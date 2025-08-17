#include <stdio.h>
#include <string.h>
#include <math.h>

int refill(double s, char n[]){
    if (strcmp("Nano", n) == 0) return ceill(s/6.6);
    if (strcmp("Toh", n) == 0) return ceill(s/5.5);
    if (strcmp("Mickey", n) == 0) return ceill(s/5.5);
    
}

int main(){
    int n;
    double f1, f2,f3, s1 = 0, s2 = 0, s3 = 0;
    char n1[7], n2[7], n3[7];

    scanf(" %d", &n);
    scanf(" %s %s %s", n1, n2, n3);
    for (int i = 0; i < n; i++) {
        scanf(" %lf %lf %lf", &f1, &f2, &f3);
        s1 += f1;
        s2 += f2;
        s3 += f3;
    }

    printf("%s: %d refills\n", n1, refill(s1, n1));
    printf("%s: %d refills\n", n2, refill(s2, n2));
    printf("%s: %d refills\n", n3, refill(s3, n3));

    return 0;
}