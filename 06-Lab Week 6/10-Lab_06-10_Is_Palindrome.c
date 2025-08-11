#include <stdio.h>
#include <string.h>


int main(){
    char chr[101], tmp[101];
    scanf("%[^\n]",chr);
    int len = strlen(chr);

    for (int i = 0; i < len; i++) {
        tmp[i] = chr[len - 1 - i];
    }
    tmp[len] = '\0';

    if (strcmp(chr, tmp) == 0) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }

    return 0;
}