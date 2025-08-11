#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char codeu[] = {'A','B','X','Y','P','Q','R','M','N','C','E','D','K','L','J','O','S','H','T','U','F','V','Z','G','W','I','A','B','X','Y','P'};
    char codel[] = {'a','b','x','y','p','q','r','m','n','c','e','d','k','l','j','o','s','h','t','u','f','v','z','g','w','i','a','b','x','y','p'};
    
    char text[201];
    scanf(" %[^\n]", text);

    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (isupper(ch)) {

            for (int i = 0; i < 26; i++) {
                if (codeu[i] == ch) {
                    ch = i+5;
                    break;
                }
            }

            putchar(codeu[ch]);
        } else if (islower(ch)) {

            for (int i = 0; i < 26; i++) {
                if (codel[i] == ch) {
                    ch = i+5;
                    break;
                }
            }

            putchar(codel[ch]);
        } else {
            putchar(ch);
        }
    }

    return 0;
}