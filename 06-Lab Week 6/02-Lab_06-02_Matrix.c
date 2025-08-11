#include <stdio.h>

int main(){
    double M[3][3], N[3][3] , R[3][3], tmp = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %lf", &N[i][j]);
        }
    }

    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tmp = 0;
            for (int x = 0; x < 3; x++) {
                tmp += M[i][x] * N[x][j];
            }
            R[i][j] = tmp;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}