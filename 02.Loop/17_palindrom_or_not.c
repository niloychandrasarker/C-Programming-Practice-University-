// C program to check whether a number is palindrome or not
#include <stdio.h>
int main()
{
    int number;

    printf("Enter any number: ");
    scanf("%d",&number);
    
    int num=number;
    int  reversed_num = 0;

    while (num != 0) 
    {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    if(number == reversed_num)
    {
     printf("palindrom\n");
    }
    else
    {
      printf("Not palindrom\n");
    }

    

    return 0;
}
