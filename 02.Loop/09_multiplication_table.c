//  C program to print multiplication table of a number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number to print multiplication table table: ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }

    return 0;
}