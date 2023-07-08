// calculate result of student using logical operator
#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum, percentage;
    printf("enter marks in 5 subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum * 100 / 500;
    if (percentage >= 60)
    {
        printf("first division");
    }
    else
    {
        if (percentage >= 50)
            printf("second division\n");
        else
        {
            if (percentage >= 40)
            {
                printf("third division");
            }
            else
            {
                printf("fail\n");
            }
        }
    }
    return 0;
}