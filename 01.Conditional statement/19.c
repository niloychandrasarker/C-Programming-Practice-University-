#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    if (num % 11 == 0 && num % 9 == 0) 
    {
        printf("%d is divisible by both 11 and 9.\n",num);
    } 
    else 
    {
        printf("%d is not divisible by both 11 and 9.\n",num);
    }

    return 0;
}
