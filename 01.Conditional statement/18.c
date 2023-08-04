#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("even num.\n");
    } 
    else 
    {
        printf("odd num.\n");
    }

    return 0;
}
