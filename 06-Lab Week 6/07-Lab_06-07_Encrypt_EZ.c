#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char codeu[] = {'I','W','G','Z','V','F','U','T','H','S','O','J','L','K','D','E','C','N','M','R','Q','P','Y','X','B','A','I','W','G','Z','V'};
    char codel[] = {'i','w','g','z','v','f','u','t','h','s','o','j','l','k','d','e','c','n','m','r','q','p','y','x','b','a','i','w','g','z','v'};
    
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