#include <stdio.h>

int main() {
    char info[41];
    int g1, g2, g3, g4, g5, g6;

    // Your code here
    scanf("%[^\n]%d %d %d %d %d %d", info, &g1, &g2, &g3, &g4, &g5, &g6);
    printf("Grade announcement 1/2568: %s\nGPS/GPA: %.2f",info, (((g1 *3) + (g2 *3) + (g3 *3) + (g4 *3) + (g5 *3) + (g6 *3))/18.0));

    return 0;
}