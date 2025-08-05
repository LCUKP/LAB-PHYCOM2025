#include <stdio.h>

int main(){
    int countcon1 = 0, countcon2 = 0, countcon3 = 0, countcon4 = 0, age = 0, h = 0, w = 0, avg_age = 0;
    // countcon1 = จำนวนผู้ที่อายุตั้งแต่ 20 ปี ขึ้นไปและมีความสูงตั้งแต่ 160 ขึ้นไป
    // countcon2 = จำนวนผู้ที่อายุต่ำกว่า 20 ปี และมีความสูงไม่เกิน 180 หรือ น้ำหนักไม่ต่ำกว่า 60
    // countcon3 = จำนวนผู้ที่อายุตั้งแต่ 30 ปี ขึ้นไปและมีน้ำหนักในช่วง 40 - 80
    // countcon4 = จำนวนผู้ที่อายุต่ำกว่า 40 ปี และมีน้ำหนักต่ำกว่า 85 หรือ ความสูงไม่เกิน 200
    float avg_h, avg_w;

    for (int i = 0; i < 50; i++)
    {
        scanf("%i %i %i", &age, &h, &w);
        countcon1 += (age >= 20 && h >= 160) ? 1 : 0;
        countcon2 += (age < 20 && (h <= 180 || w >= 60)) ? 1 : 0;
        countcon3 += (age >= 30 && w >= 40 && w <= 80) ? 1 : 0;
        countcon4 += (age < 40 && (w < 85 || h <= 200)) ? 1 : 0;
        avg_age += age;
        avg_h += h;
        avg_w += w;
    }

    printf("Age >= 20 and Height >= 160: %d\n", countcon1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", countcon2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", countcon3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", countcon4);
    printf("Average Age: %d\n", (avg_age/50));
    printf("Average Height: %.2f\n", (avg_h/50));
    printf("Average Weight: %.2f\n", (avg_w/50));
    
    return 0;
}