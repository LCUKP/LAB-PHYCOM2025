#include <stdio.h>
#include <ctype.h>

int main() {
    int n;
    char ch;
    scanf("%d", &n);
    int alpha[26] = {0};
    int order[26] = {0};
    int pos = 0;

    for(int i = 0; i < n; i++){
        scanf(" %c", &ch);
        ch = tolower(ch);
        int idx = ch - 'a';
        if (alpha[idx] == 0) {
            order[pos++] = idx; 
        }

        alpha[idx]++;
    }

    for (int j = 0; j < pos; j++) {
        int idx = order[j];
        printf("%c: %d\n",(idx+'a'), alpha[idx]);
    }
    
    return 0;
}