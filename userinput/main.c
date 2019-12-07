#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s\n", name);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    return 0;
}