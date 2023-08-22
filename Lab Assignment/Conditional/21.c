/*21. Write a C program to determine eligibility for admission to a professional course based
on the following criteria: Go to the editor
22. Eligibility Criteria : Marks in Maths &gt;=65 and Marks in Phy &gt;=55 and Marks in
Chem&gt;=50 and Total in all three subject &gt;=190 or Total in Maths and Physics &gt;=140 -----
-------------------------------- Input the marks obtained in Physics :65 Input the marks
obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of
Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The
candidate is not eligible.*/
#include <stdio.h>
int main() 
{
    int mathMarks, physicsMarks, chemistryMarks;
    int totalMarks, mathPhysicsTotal;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physicsMarks);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistryMarks);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathMarks);

    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &totalMarks);

    printf("Total marks of Maths and Physics: ");
    scanf("%d", &mathPhysicsTotal);

    if (mathMarks >= 65 && physicsMarks >= 55 && chemistryMarks >= 50 &&
        totalMarks >= 190) 
    {
        printf("The candidate is eligible.\n");
    } 
    else if (mathPhysicsTotal >= 140) 
    {
        printf("The candidate is eligible through quota.\n");
    } 
    else 
    {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
