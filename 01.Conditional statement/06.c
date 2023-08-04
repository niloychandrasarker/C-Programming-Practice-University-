#include <stdio.h>
int main()
{
    int mark;

    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    if (mark >= 80) 
    {
        printf("Distinction\n");
    } 
    else if (mark >= 60) 
    {
        printf("First Division\n");
    } 
    else if (mark >= 50) 
    {
        printf("Second Division\n");
    } 
    else if (mark >= 40) 
    {
        printf("Third Division\n");
    }
}
