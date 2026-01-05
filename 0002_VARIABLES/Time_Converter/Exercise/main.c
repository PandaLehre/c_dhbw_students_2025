#include <stdio.h>

int main()
{
    float milliseconds = 0.0F;

    printf("Please enter a millisecond value: ");
    scanf("%f", &milliseconds);

    float seconds = milliseconds / 1000;
    float minutes = seconds /60;
    float hours = minutes / 60;
    float days = hours / 24;

    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}
