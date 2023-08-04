#include <stdio.h>

int main() 
{
    float mark;
    const float passNumber = 40.0;

    scanf("%f", &mark);

    if (mark >= passNumber)
    {
        printf("Pass\n");
    } 
    else 
    {
        printf("Fail\n");
    }

    return 0;
}
