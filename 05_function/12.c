/*12. Write a function that gets two positive integers and reurns nPr
(Permutation).*/
#include <stdio.h>

int factorial(int n) 
{
    int result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

int calculatePermutation(int n, int r) 
{
    return factorial(n) / factorial(n - r);
}

int main() 
{
    int n, r;

    printf("Enter a positive n: ");
    scanf("%d", &n);

    printf("Enter a positive r (r <= n): ");
    scanf("%d", &r);

    if (n <= 0 || r < 0 || r > n) 
    {
        printf("Please enter a positive n, and r <= n.\n");
    } 
    else 
    {
        int permutation = calculatePermutation(n, r);
        printf("%dP%d (Permutation): %d\n", n, r, permutation);
    }

    return 0;
}
