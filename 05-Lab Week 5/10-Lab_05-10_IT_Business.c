#include <stdio.h>

int main(){
    float bank, cash, tmp;
    int err = 0;
    char status = '-';
    scanf(" %f %f", &bank, &cash);

    while (err != 3)
    {
        scanf("%c %f", &status, &tmp);
        if (status == 'E'){
            break;
        }
        
        if (status == 'D'){
            if (cash >= tmp){
                bank += tmp;
                cash -= tmp;
                err = 0;
            } else {
                err++;
            }
        } else if (status == 'W'){
            if (bank >= tmp){
                bank -= tmp;
                cash += tmp;
                err = 0;
            } else {
                err++;
            }
        }
    }
    
    printf("%.2F\n%.2F", bank, cash);

    return 0;
}