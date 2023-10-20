/*10.	Write a program that read and display some students name, roll, and marks from a file  and display in screen. */
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    FILE *file;
    struct Student student;
    file = fopen("students.txt", "r");

    if (file == NULL) 
    {
        printf("File not found or could not be opened.\n");
        return 1;
    }

    printf("Student Information:\n");
    while (fscanf(file, "%s %d %f", student.name, &student.roll, &student.marks) != EOF) 
    {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", student.name, student.roll, student.marks);
    }

    fclose(file);

    return 0;
}
