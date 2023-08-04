#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
   
    if (num1 > num2) 
    {
        printf("maximum : \n", num1);
    } 
    else 
    {
        printf("maximum : %d\n", num2);
    }

    return 0;
}
