#include <stdio.h>

int main() {
    char tyre;
    scanf("%c", &tyre);

    if (tyre == 'S' || tyre == 's') {
        printf("Soft");
    } else if (tyre == 'M' || tyre == 'm') {
        printf("Medium");
    } else if (tyre == 'H' || tyre == 'h') {
        printf("Hard");
    } else if (tyre == 'I' || tyre == 'i') {
        printf("Intermediate");
    } else if (tyre == 'W' || tyre == 'w') {
        printf("Wet");
    }

    return 0;
}
