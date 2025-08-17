#include <stdio.h>

double getValue(){
    double value;
    scanf(" %lf", &value);
    return value;
}

double findMin(double array[], int size){
    double tmp = array[0];
    for (int i = 1; i < size; i++) {
        if(array[i] < tmp){
            tmp = array[i];
        }
    }
    return tmp;
}

double findMax(double array[], int size){
    double tmp = array[0];
    for (int i = 1; i < size; i++) {
        if(array[i] > tmp){
            tmp = array[i];
        }
    }
    return tmp;
}

double findAvg(double array[], int size){
    double tmp = 0;
    for (int i = 0; i < size; i++) {
        tmp += array[i];
    }
    return (tmp/size);
}

int main(){
    int n;
    scanf("%d", &n);

    double array[n];
    for (int i = 0; i < n; i++) {
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, min, max, avg);

}