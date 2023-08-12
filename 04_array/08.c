//8. Write a C program to delete all duplicate elements from an array.
#include <stdio.h>
int main() 
{
    int n;
    
    printf("Size : ");
    scanf("%d", &n);

    int array[n]; 

    printf("Array : ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &array[i]);
    }

    
    int newSize = 0;

    for (int i = 0; i < n; i++) 
    {
        int flag = 0;
        for (int j = 0; j < newSize; j++) 
        {
            if (array[i] == array[j]) 
            {
                flag = 1;
                break;
            }
        }

        if (flag==0) 
        {
            array[newSize] = array[i];
            newSize++;
        }
    }

   
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) 
    {
        printf("%d ", array[i]);
    }

    return 0;
}
