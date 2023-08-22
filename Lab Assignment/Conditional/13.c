/*13. Write a C program to Check whether the triangle is equilateral, isosceles or scalene
triangle.*/
#include <stdio.h>
int main() 
{
    int side1, side2, side3;
    
    printf("Enter the lengths of three sides: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if (side1 == side2 && side2 == side3) 
    {
        printf("Equilateral triangle\n");
    } 
    else if (side1 == side2 || side2 == side3 || side1 == side3) 
    {
        printf("Isosceles triangle\n");
    } 
    else 
    {
        printf("Scalene triangle\n");
    }
    
    return 0;
}
