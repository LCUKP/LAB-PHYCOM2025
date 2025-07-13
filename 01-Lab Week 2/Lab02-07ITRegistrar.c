#include <stdio.h>

int main(){
    char name[31];
    char lname[31];
    char code[9];
    int day;
    int mount;
    int years;
    float gpa;

    scanf("%s", name);
    scanf("%s", lname);
    scanf("%s", code);
    scanf("%d/%d/%d", &day, &mount, &years);
    scanf("%f", &gpa);

    
    printf("Fullname: %s %s\n", name, lname);
    printf("ID: %s\n", code);
    printf("DOB: %02d-%02d-%d\n", day, mount, years);
    printf("GPA: %.2f\n", gpa);
    return 0;
}