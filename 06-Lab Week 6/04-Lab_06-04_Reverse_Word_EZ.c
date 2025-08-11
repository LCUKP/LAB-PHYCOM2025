#include <stdio.h>

int main(){
    char chr[100];
    scanf("%[^\n]",chr);
    int len = 0;
    while (chr[len] != '\0') {
        len++;
    }
    
    for(int i = len-1; i >= 0 ; i--){
        printf("%c", chr[i]);
    }
    

    return 0;
}