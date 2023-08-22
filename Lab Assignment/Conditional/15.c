/*15. Write a C program to input basic salary of an employee and calculate its Gross salary
according to following:
Basic Salary &lt;= 10000 : HRA = 20%, DA = 80%
Basic Salary &lt;= 20000 : HRA = 25%, DA = 90%
Basic Salary &gt; 20000 : HRA = 30%, DA = 95%*/
#include <stdio.h>
int main() 
{
    float basicSalary, grossSalary, hra, da;
    
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);
    
    if (basicSalary <= 10000) 
    {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } 
    else if (basicSalary <= 20000) 
    {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } 
    else 
    {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }
    
    grossSalary = basicSalary + hra + da;
    
    printf("Gross Salary: %.2f\n", grossSalary);
    
    return 0;
}
