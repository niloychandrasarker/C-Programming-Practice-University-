//6. Write a program that searches any number from an array.
#include <stdio.h>
int main() 
{
    int n, target;

    
    printf("Size = ");
    scanf("%d", &n);

    int ar[n]; 
      printf("Array  = ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ar[i]);
    }

    
    printf("Enter the number to search : ");
    scanf("%d", &target);

    
    int flag = 0; 
    for (int i = 0; i < n; i++) 
    {
        if (ar[i] == target)
        {
            flag = 1;
            break; 
        }
    }

    
    if (flag==1) 
    {
        printf("Number %d found in the array.\n",target);
    } 
    else 
    {
        printf("Number %d not found in the array.\n",target);
    }

    return 0;
}
