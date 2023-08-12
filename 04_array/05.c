// 5. Write a program that delete any number in an array.

#include<stdio.h>
int main()
{
      int n,num,position;
      printf("Size = ");
      scanf("%d",&n);
      int ar[n];
      printf("Array  = ");
      for(int i=0 ; i<n ; i++)
      {
            scanf("%d",&ar[i]);
      }

      printf("Enter the position to delete from array: ");
      scanf("%d", &position);
      printf("Befor insertation \n");
      for(int i=0 ; i<n ; i++)
      {
            printf("%d ",ar[i]);
      }

      

    
    if (position < 0 || position >= n) 
    {
        printf("Invalid position.\n");
        return 1; 
    }


    for (int i = position; i < n - 1; i++) 
    {
        ar[i] = ar[i + 1];
    }

    printf("\nUpdated array after deletion :\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", ar[i]);
    }
      
            
      return 0;
}