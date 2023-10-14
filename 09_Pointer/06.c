/*6.	Write a program that reads two characters and display maximum.*/

#include <stdio.h>
int main() 
{
    char char1, char2;
    char *ptr1 = &char1, *ptr2 = &char2;

    printf("Enter two characters: ");
    scanf(" %c %c", ptr1, ptr2); // Note the space before %c to skip whitespace.

    if(*ptr1 > *ptr2)
    {
       printf("Maximum: %c\n",*ptr1);
    }
    else
    {
      printf("Maximum: %c\n",*ptr2);
    }
    return 0;
}
