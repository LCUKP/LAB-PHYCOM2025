#include <stdio.h>

int main(){
    char sex, driver;
    float w, cc, al, all,alll;
    int count,hr;

    scanf("%c %f %c %f %f %d %d", &sex, &w, &driver, &cc, &al, &count, &hr);

    all = ((al * cc) / 100) *count;

    if(sex == 'M') {
        alll = all / (w * 0.68 * 10);
    } else if (sex = 'F'){
        alll = all / (w * 0.55 * 10);
    }

    // printf("%f", alll);
    if((alll - (0.015*hr)) > 0.05 | driver == 'N') {
        printf("Not Safe");
    } else {
        printf("Safe");
    }

    return 0;
}