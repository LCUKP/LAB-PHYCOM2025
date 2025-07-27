#include <stdio.h>
#include <ctype.h>

int main() {
    char chr;
    scanf("%c", &chr);
    
    if (isalpha(chr)){
        if (islower(chr)) {
            printf("lowercase");
        } else if (isupper(chr)) {
            printf("uppercase");
        }
    } else if (isalnum(chr)) {
        printf("number");
    } else {
        printf("error");
    }

    return 0;
}