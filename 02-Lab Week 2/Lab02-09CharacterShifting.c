#include <stdio.h>

char shifting(char c) {
    if ((c >= 65 && c < 90) || (c >= 97 && c < 122)){
        c += 1;
    } else if(c == 90) {
        c = 'A';
    }else if(c == 122) {
        c = 'a';
    }
    return c;
}

int main() {
    char c1, c2, c3, c4, c5;
    scanf("%c\n%c\n%c\n%c\n%c", &c1,&c2,&c3,&c4,&c5);
    c1 = shifting(c1);
    c3 = shifting(c3);
    c5 = shifting(c5);
    printf("%c\n%c\n%c\n%c\n%c", c1, c2, c3, c4, c5);
    return 0;
}
