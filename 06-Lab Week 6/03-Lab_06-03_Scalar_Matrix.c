#include <stdio.h>
#include <stdbool.h>

int main(){
    double M[3][3];
    bool b = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %lf", &M[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i != j && M[i][j] != 0) {
                b = false;
            } else if (i == j && M[i][j] == 0) {
                b = false;
            }
        }
    }

    if (b) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }

    return 0;
}