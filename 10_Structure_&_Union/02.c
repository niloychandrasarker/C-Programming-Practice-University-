/*2.	Write a C program to store information of 10 students using structures.*/
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[10]; 
    // Input student information
    for (int i = 0; i < 10; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student information
    printf("\nStudent Information:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Student %d: Name - %s, Roll - %d, Marks - %.2f\n", i + 1, students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
