#include <stdio.h>
#include <string.h>

int main() {
    double t, tmp;
    char name[36], max[36];
    
    scanf("%lf %[^\n]", &t, name);
    tmp = t;
    strcpy(max, name);

    for (int i = 0; i < 2; i++) {
        scanf("%lf %[^\n]", &t, name);
        if (t < tmp) {
            tmp = t;
            strcpy(max, name);
        }
    }

    printf("%s is Fastest : %.3lf", max, tmp);

    return 0;
}