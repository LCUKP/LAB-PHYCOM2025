#include <stdio.h>

int main() {

    char t1[31];
    char t2[31];
    char t3[31];
    char t4[31];

    scanf("%s", t1);
    scanf("%s", t2);
    scanf("%s", t3);
    scanf("%s", t4);

    printf("String 1: %1.3s\n", t1);
    printf("String 2: %1.4s\n", t2);
    printf("String 3: %1.5s\n", t3);
    printf("String 4: %1.6s\n", t4);

    return 0;
}
