/*7.	Write a C program for passing structures as function arguments and returning a structure from a function.*/
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

// Function to initialize a student structure
struct Student initializeStudent(const char name[], int roll, float marks) 
{
    struct Student student;
    strcpy(student.name, name);
    student.roll = roll;
    student.marks = marks;
    return student;
}

// Function to display student details
void displayStudent(const struct Student student) 
{
    printf("Name: %s\n", student.name);
    printf("Roll: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);
}

int main() 
{
    struct Student s1 = initializeStudent("John", 101, 85.5);

    printf("Student Details:\n");
    displayStudent(s1);

    return 0;
}
