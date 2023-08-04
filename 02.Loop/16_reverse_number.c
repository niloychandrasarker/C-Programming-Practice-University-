// C program to find reverse of a number
#include <stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d",&num);

    int  reversed_num = 0;

    while (num != 0) 
    {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    }

    printf("reverse number is: %d\n", reversed_num);

    return 0;
}
