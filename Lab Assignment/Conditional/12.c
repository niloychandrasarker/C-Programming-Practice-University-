//12. Write a C program to input angles of a triangle and check the triangle is valid or not.
#include <stdio.h>
int main() 
{
    int angle1, angle2, angle3;
    
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    
    if (angle1 + angle2 + angle3 == 180) 
    {
        printf("The angles can form a valid triangle.\n");
    } 
    else 
    {
        printf("The angles cannot form a valid triangle.\n");
    }
    
    return 0;
}
