//3. Write a program that read two line of text and copy second line into first line.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[1000], str2[1000];
    
    printf("Enter the first line of text: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second line of text: ");
    fgets(str2, sizeof(str2), stdin);
  
    strcpy(str1, str2);
    
    printf("First line after copying: %s\n", str1);
    
    return 0;
}
