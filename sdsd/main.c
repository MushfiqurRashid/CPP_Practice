#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days, years, months;
    int days;
    printf("Please Enter Days:");
    scanf("%d",&days);
    years = days/365;
    months = (days % 365);
    days = days- ((years*365) + (weeks*7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);

    return 0;
}
