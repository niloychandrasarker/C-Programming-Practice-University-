/*8.	Write a program that read and display any student name, roll and mark*/
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    struct Student student;

    // Input student details
    printf("Enter the student's name: ");
    scanf("%s", student.name);
    printf("Enter the student's roll number: ");
    scanf("%d", &student.roll);
    printf("Enter the student's marks: ");
    scanf("%f", &student.marks);

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
