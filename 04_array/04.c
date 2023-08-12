// 4. Write a program that inserts any number in an array.

#include<stdio.h>
int main()
{
      int n,num;
      printf("Size = ");
      scanf("%d",&n);
      int ar[n+1];
      printf("Array  = ");
      for(int i=0 ; i<n ; i++)
      {
            scanf("%d",&ar[i]);
      }

       printf("Enter the number to insert: ");
       scanf("%d", &num);

       ar[n] = num;

      printf("Befor insertation \n");
      for(int i=0 ; i<n ; i++)
      {
            printf("%d ",ar[i]);
      }
      
      printf("\nUpdated array after insertion:\n");
      for (int i = 0; i < n + 1; i++)
      {
        printf("%d ", ar[i]);
      }
      
            
      return 0;
}