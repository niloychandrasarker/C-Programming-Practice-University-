/*20. Write a C program to accept a coordinate point in an XY coordinate system and
determine in which quadrant the coordinate point lies.*/
#include <stdio.h>
int main() 
{
    float x, y;
    
    printf("Enter the coordinates (x, y): ");
    scanf("%f %f", &x, &y);
    
    if (x > 0 && y > 0)
    {
        printf("1st Quadrant\n");
    } 
    else if (x < 0 && y > 0) 
    {
        printf("2nd Quadrant\n");
    } 
    else if (x < 0 && y < 0) 
    {
        printf("3rd Quadrant\n");
    } 
    else if (x > 0 && y < 0) 
    {
        printf("4th Quadrant\n");
    } 
    else 
    {
        printf("Invalid\n");
    }
    
    return 0;
}
