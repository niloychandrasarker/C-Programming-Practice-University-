/*24. Write a C program which computes the area of various geometrical shapes using a menu-
driven approach.*/
#include <stdio.h>
int main() 
{
    int choice;
    float area;

    printf("Choose a shape:\n");
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1: 
        {
            float radius;
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            break;
        }
        case 2: 
        {
            float length, width;
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            break;
        }
        case 3: 
        {
            float base, height;
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            break;
        }
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("Area: %.2f\n", area);

    return 0;
}
