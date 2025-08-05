#include <stdio.h>

int main() {
    int age, day, price = 0;
    scanf("%d %d", &age, &day);

    if (age <= 12) {
        price = 120;
    } else if (age <= 59 && age >= 13) {
        price = 220;
    } else if (age >= 60 ) {
        price = 140;
    }

    if (day == 4) {
        price = 100;
    } else if (day == 1 || day == 7) {
        price += 20;
    }
    printf("Ticket price: %d Baht", price);

    return 0;
}