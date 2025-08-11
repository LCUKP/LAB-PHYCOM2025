#include <stdio.h>

int main(){
    char chr[301], cr;
    int count = 0, pos[301];

    scanf("%[^\n] %c", chr, &cr);

    int len = 0;
    while (chr[len] != '\0') {
        len++;
    }
    
    for(int i = 0; i < len ; i++){
        if((chr[i] == cr || chr[i] == cr+32) || (chr[i] == cr || chr[i] == cr-32)){
            pos[count] = i + 1;
            count++;
        }
    }

    if (count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count,cr);
        printf("Position: %d",pos[0]);
        for (int i = 1; i < count; i++){

            printf(", %d",pos[i]);
        }
    } else {
        printf("Not found.");
    }

    return 0;
}