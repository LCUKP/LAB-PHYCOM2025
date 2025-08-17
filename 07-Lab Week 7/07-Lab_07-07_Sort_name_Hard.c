#include <stdio.h>
#include <ctype.h>
#include <string.h>

void formatName(char name[]) {
    int newWord = 1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            newWord = 1;
        } else {
            if (newWord) {
                name[i] = toupper(name[i]);
                newWord = 0;
            } else {
                name[i] = tolower(name[i]);
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    char names[n][61];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", names[i]);
        formatName(names[i]);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[61];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}