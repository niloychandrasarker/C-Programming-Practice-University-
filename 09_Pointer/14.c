/*14.	Write a C Program to Find the Largest Element of an Array.*/

#include <stdio.h>

int main() 
{
    int arr[] = {12, 45, 78, 23, 56, 89, 67};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr;
   
    int max = 0;

    for (int i = 1; i < n; i++) 
    {
        if (ptr[i] > max) 
        {
            max = arr[i];
        }
    }


    printf("The largest element in the array is: %d\n", max);

    return 0;
}
