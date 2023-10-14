/*5.	Write a program that reads two double value and display maximum.*/

#include <stdio.h>
int main() 
{
    double num1, num2;
    double *ptr1 = &num1, *ptr2 = &num2;
    scanf("%lf %lf", ptr1, ptr2);

    if(*ptr1 > *ptr2)
    {
       printf("Maximum: %lf\n",*ptr1);
    }
    else
    {
      printf("Maximum: %lf\n",*ptr2);
    }
    

    return 0;
}
