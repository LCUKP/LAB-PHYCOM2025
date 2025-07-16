#include <stdio.h>

int main() {
    char fname1[31], sname1[31], fperson2[31], lperson2[31], fperson3[31], lperson3[31]; 
    scanf("%s", fname1);
    scanf("%s", sname1);
    scanf("%s %s", fperson2, lperson2);
    scanf("%s %s", fperson3, lperson3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", fperson2, lperson2);
    printf("Person 3: %s %s\n", fperson3, lperson3);
    return 0;
}