/*16. Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include <stdio.h>
int main() 
{
    int units;
    float totalBill, subcharge = 0.0;
    
    printf("Enter the electricity units: ");
    scanf("%d", &units);
    
    if (units <= 50) 
    {
        totalBill = 0.50 * units;
    } 
    else if (units <= 150) 
    {
        totalBill = 0.50 * 50 + 0.75 * (units - 50);
    } 
    else if (units <= 250) 
    {
        totalBill = 0.50 * 50 + 0.75 * 100 + 1.20 * (units - 150);
    } 
    else 
    {
        totalBill = 0.50 * 50 + 0.75 * 100 + 1.20 * 100 + 1.50 * (units - 250);
    }
    
    subcharge = 0.20 * totalBill;
    totalBill += subcharge;
    
    printf("Total Electricity Bill: %.2f\n", totalBill);
    
    return 0;
}
