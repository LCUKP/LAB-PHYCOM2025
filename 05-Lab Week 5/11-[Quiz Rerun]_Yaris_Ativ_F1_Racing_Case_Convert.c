#include <stdio.h>

int main() {
    char chr;
    scanf("%c", &chr);
    
    if (chr <= 90 && chr >= 65) {
        printf("%c", chr + 32);
    } else if (chr <= 122 && chr >= 97) {
        printf("%c", chr - 32);
    } else {
        printf("error");
    }

    return 0;
}