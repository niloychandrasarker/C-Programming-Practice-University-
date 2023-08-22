/*19. Write a C program to accept the height of a person in centimeters and categorize the
person according to their height.*/
#include <stdio.h>
int main() 
{
    float height;
    
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);
    
    if (height < 150.0) 
    {
        printf("Short\n");
    } 
    else if (height >= 150.0 && height < 165.0) 
    {
        printf("Average\n");
    } 
    else if (height >= 165.0 && height < 180.0) 
    {
        printf("Tall\n");
    } 
    else 
    {
        printf("Very tall\n");
    }
    
    return 0;
}
