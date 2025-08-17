#include <stdio.h>

int main(){
    int t1[7], t2[7], sum1 = 0, sum2 = 0, c1 = 0, c2 = 0, e = 0;
    char n1[31], n2[31];

    scanf(" %[^\n]", n1);
    for (int i = 0; i < 7; i++) {
        scanf(" %d", &t1[i]);
        sum1 += t1[i];
    }
    
    scanf(" %[^\n]", n2);
    for (int i = 0; i < 7; i++) {
        scanf(" %d", &t2[i]);
        sum2 += t2[i];
    }

    for (int i = 0; i < 7; i++) {
        if (t1[i] > t2[i]) {
            c2++;
        } else if (t1[i] < t2[i]) {
            c1++;
        } if (t1[i] == t2[i]) {
            e++;
        }
    }
    
    printf("%s: %d minutes, average %d minutes/day\n", n1, sum1, (sum1/7));
    printf("%s: %d minutes, average %d minutes/day\n", n2, sum2, (sum2/7));
    printf("Faster days - %s: %d, %s: %d, Equal: %d", n1, c1, n2, c2, e);

    return 0;
}