#include <stdio.h>

int main()
{
    float celsius;
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.1f\n", fahrenheit);
    return 0;
}