//Write a C program to find  all prime numbers between 1 to n.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
   
   

   for(int i=2 ; i<=num ; i++)
   {
      int flag = 1;

      for(int j=2 ; j<=i/2 ; j++)
      {
          if(i % j == 0 )
          {
            flag = 0;
            break;
          }
      }

       if(flag == 1)
        {
         printf("%d\n",i);
        }
   }

    return 0;
}