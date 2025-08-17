#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

void convert(char ch[]){
    for (int i = 0; i < strlen(ch); i++){
        if (islower(ch[i])) {
            ch[i] = toupper(ch[i]);
        } else if (isupper(ch[i])) {
            ch[i] = tolower(ch[i]);
        }
    }
}

bool areTheSame(char ch1[], char ch2[]){
    if(strlen(ch1) == strlen(ch2)) {
        char tmpc1, tmpc2;
        for (int i = 0; i < strlen(ch1); i++) {
            tmpc1 = tolower(ch1[i]);
            tmpc2 = tolower(ch2[i]);
            if (tmpc1 != tmpc2) {
                return false;
            }
        }
    } else {
        return false;
    }
    return true;
}

int main(){
    char ch1[102], ch2[102];
    scanf(" %[^\n] %[^\n]", ch1, ch2);
    convert(ch1);
    convert(ch2);
    printf("*** Results ***\n%s\n%s\n***************\n", ch1, ch2);

    areTheSame(ch1, ch2) ? printf("Both strings are the same.") : printf("Both strings are not the same.");

    return 0;
}