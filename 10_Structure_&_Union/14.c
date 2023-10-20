/*14.	Write a program that read some players name, team name and batting average. Display  this according to team name.*/
#include <stdio.h>
#include <string.h>

struct Player 
{
    char name[50];
    char team[50];
    float battingAverage;
};

int main() 
{
    struct Player players[100]; 
    int numPlayers;

    
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    // Input player details
    for (int i = 0; i < numPlayers; i++) 
    {
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Team: ");
        scanf("%s", players[i].team);
        printf("Batting Average: ");
        scanf("%f", &players[i].battingAverage);
    }

    // Display players by team
    printf("\nPlayers by Team:\n");
    for (int i = 0; i < numPlayers; i++) 
    {
        printf("Name: %s, Team: %s, Batting Average: %.2f\n", players[i].name, players[i].team, players[i].battingAverage);
    }

    return 0;
}
