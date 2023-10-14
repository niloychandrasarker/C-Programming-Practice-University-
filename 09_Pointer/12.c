/*C Program to Swap Numbers in Cyclic Order Using Call by Reference*/

#include <stdio.h>
void cyclicSwap(int *a, int *b, int *c) 
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main() 
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    cyclicSwap(&num1, &num2, &num3);

    printf("After cyclic swap: %d %d %d\n", num1, num2, num3);

    return 0;
}
