#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelsius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main(){
    double n;
    char ch;
    scanf(" %lf %c", &n, &ch);
    ch = tolower(ch);
    if(ch == 'c') {
        printFarenheit(celsiusToFahrenheit(n));
    } else {
        printCelcius(fahrenheitToCelsius(n));
    }
}

double celsiusToFahrenheit(double celcius){
    return (celcius * 1.8) + 32;
}

double fahrenheitToCelsius(double fahrenheit){
    return (fahrenheit - 32) / 1.8;
}

void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}
