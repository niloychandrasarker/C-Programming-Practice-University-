/*12.	Write a program that read some students name, three subjects marks and display their  name, total, average marks and grade point averages */
#include <stdio.h>

struct Student 
{
    char name[50];
    float marks[3];
    float total;
    float average;
    float gpa;
};

int main() 
{
    struct Student student;

    // Input student details
    printf("Enter the student's name: ");
    scanf("%s", student.name);

    student.total = 0;
    for (int i = 0; i < 3; i++) 
    {
        printf("Enter the marks for subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i];
    }

    student.average = student.total / 3;

    // Assuming a simple grading scale for GPA
    if (student.average >= 90) 
    {
        student.gpa = 4.0;
    } 
    else if (student.average >= 80) 
    {
        student.gpa = 3.0;
    } 
    else if (student.average >= 70) 
    {
        student.gpa = 2.0;
    } 
    else if (student.average >= 60) 
    {
        student.gpa = 1.0;
    } 
    else 
    {
        student.gpa = 0.0;
    }

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", student.total);
    printf("Average Marks: %.2f\n", student.average);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}
