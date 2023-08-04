
//  C program to swap first and last digit of a number
 
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);

    int lastDigit  = num % 10; 
    int digits     = (int) log10(num); 
    int firstDigit = (int) (num / pow(10, digits));

    int swappedNum  = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += num % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Original number = %d\n", num);
    printf("after swapping : %d", swappedNum);

    return 0;
}