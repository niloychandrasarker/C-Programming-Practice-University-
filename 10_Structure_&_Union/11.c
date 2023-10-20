/*11.	Write a program that read and display some students name, roll, and marks from a file,  sort and display in screen according to marks. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

// Comparison function for sorting by marks in descending order
int compare(const void *a, const void *b) 
{
    return (int)(((struct Student *)b)->marks - ((struct Student *)a)->marks);
}

int main() 
{
    FILE *file;
    struct Student students[100]; 
    int numStudents = 0;

    file = fopen("students.txt", "r");

    if (file == NULL) 
    {
        printf("File not found or could not be opened.\n");
        return 1;
    }

    while (fscanf(file, "%s %d %f", students[numStudents].name, &students[numStudents].roll, &students[numStudents].marks) != EOF) {
        numStudents++;
    }

    fclose(file);

    // Sort the students by marks
    qsort(students, numStudents, sizeof(struct Student), compare);

    printf("Students Sorted by Marks:\n");
    for (int i = 0; i < numStudents; i++) 
    {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
