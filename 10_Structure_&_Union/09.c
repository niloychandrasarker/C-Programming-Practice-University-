/*9.	Write a program that read and display some students name, roll, and marks, */
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Student %d: Name - %s, Roll - %d, Marks - %.2f\n", i + 1, students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
