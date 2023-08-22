//14. Write a C program to calculate profit or loss of your business.
#include <stdio.h>
int main() 
{
    float costPrice, sellingPrice;
    
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    
    if (sellingPrice > costPrice) 
    {
        float profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
    } 
    else if (costPrice > sellingPrice) 
    {
        float loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
    } 
    else 
    {
        printf("No profit, no loss.\n");
    }
    
    return 0;
}
