#include <stdio.h>

int main() {
    int s,d;
    scanf(" %d %d", &s, &d);
 
    if(s > 140 || d > 90){
        printf("Hypertension");
    } else {
        printf("Normal");
    }
 
    return 0;
}