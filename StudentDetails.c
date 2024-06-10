#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char name[100];
    int age;
    float cgpa;
    char grade;
    scanf("%10s", name);
    scanf("%d", &age); 
    scanf("%f", &cgpa);
    scanf(" %c", &grade);
    int cgpa_int =(cgpa * 100); 
    cgpa = cgpa_int / 100.0;          
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa); 
    printf("Grade: %c\n", grade);

    return 0;
}
