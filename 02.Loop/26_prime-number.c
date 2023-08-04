//C program to check whether a number is prime number or not

#include <stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
   
   int flag = 1;

   for(int i=2 ; i<num ; i++)
   {
      if(num % i == 0 )
      {
            flag = 0;
            break;
      }
   }
   if(flag == 1)
   {
      printf("Prime number");
   }
   else
   {
      printf("not prime number");
   }
   

    return 0;
}