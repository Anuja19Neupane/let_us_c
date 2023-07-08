// calculation of bonus

#include <stdio.h>
int main()
{
    int bonus,year_of_service,current_year,year_of_joining;
    printf("Enter current year and year of joining: ");
    scanf("%d%d",&current_year,&year_of_joining);
    year_of_service=current_year-year_of_joining;
    if(year_of_service>3)
    {
        bonus=2000;
        printf("bonus=Rs.%d\n",bonus);
    }
    return 0;
}