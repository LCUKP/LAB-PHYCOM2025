#include <stdio.h>

int main(){
    double kilo;
    scanf(" %lf", &kilo);

    if(kilo < 0 | kilo > 58.855) {
        printf("InValid");
    } else if (kilo <= 5.032){
        printf("Bangkok");
    } else if (kilo <= 35.477 ){
        printf("Samut Prakarn");
    } else if (kilo <= 52.900 ){
        printf("Chachoengsao");
    } else if (kilo <= 58.855 ){
        printf("Chon Buri");
    }
    

    return 0;
}