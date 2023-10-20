/*13.	Write a program that read roll, three subjects mark and display the highest mark in each  subjects and highest total with students roll who obtained this. */
#include <stdio.h>

struct Student 
{
    int roll;
    float marks[3];
    float total;
};

int main() 
{
    struct Student students[100]; 
    int numStudents;
    float maxMarks[3] = {0}; 
    float maxTotal = 0;
    int rollWithMaxTotal;

   
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

   
    for (int i = 0; i < numStudents; i++) 
    {
        students[i].roll = i + 1; 

        students[i].total = 0;
        for (int j = 0; j < 3; j++) 
        {
            printf("Enter the marks for subject %d for student %d: ", j + 1, students[i].roll);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];

            // Update maximum marks for each subject and overall
            if (students[i].marks[j] > maxMarks[j]) 
            {
                maxMarks[j] = students[i].marks[j];
            }
            if (students[i].total > maxTotal) 
            {
                maxTotal = students[i].total;
                rollWithMaxTotal = students[i].roll;
            }
        }
    }

    
    printf("\nHighest Marks in Each Subject:\n");
    for (int j = 0; j < 3; j++) 
    {
        printf("Subject %d: %.2f\n", j + 1, maxMarks[j]);
    }
    printf("\nStudent with the Highest Total Marks:\n");
    printf("Roll: %d\n", rollWithMaxTotal);
    printf("Total Marks: %.2f\n", maxTotal);

    return 0;
}
