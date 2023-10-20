/*4.	Write a Program C to calculate the difference between two time periods.*/
#include <stdio.h>

struct Time 
{
    int hours;
    int minutes;
    int seconds;
};

int main() 
{
    struct Time startTime, endTime, difference;

    // Input start time
    printf("Enter start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Input end time
    printf("Enter end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference
    difference.seconds = endTime.seconds - startTime.seconds;
    difference.minutes = endTime.minutes - startTime.minutes;
    difference.hours = endTime.hours - startTime.hours;

    if (difference.seconds < 0) 
    {
        difference.seconds += 60;
        difference.minutes--;
    }
    if (difference.minutes < 0) 
    {
        difference.minutes += 60;
        difference.hours--;
    }

    // Display the difference
    printf("Time Difference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
