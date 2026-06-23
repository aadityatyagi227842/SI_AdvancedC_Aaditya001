#include <stdio.h>
void main()
{
    int totalDays, years, weeks, days;
    printf("Enter total number of days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = (totalDays % 365) % 7;
    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", days);
}
