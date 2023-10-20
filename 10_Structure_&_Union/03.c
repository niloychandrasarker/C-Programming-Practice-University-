/*3.	Write a C program to read and print a cricket player's detail using structure.*/
#include <stdio.h>

struct CricketPlayer 
{
    char name[50];
    int age;
    float battingAverage;
};

int main() 
{
    struct CricketPlayer player;

    // Input player details
    printf("Enter the player's name: ");
    scanf("%s", player.name);
    printf("Enter the player's age: ");
    scanf("%d", &player.age);
    printf("Enter the player's batting average: ");
    scanf("%f", &player.battingAverage);

    // Display player information
    printf("\nCricket Player Details:\n");
    printf("Name: %s\n", player.name);
    printf("Age: %d\n", player.age);
    printf("Batting Average: %.2f\n", player.battingAverage);

    return 0;
}
