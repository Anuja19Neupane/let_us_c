#include <stdio.h>
int main()
{
    int i;
    printf("Enter 1 or 2: ");
    scanf("%d", &i);
    if (i == 1)
    {

        printf("Heaven");
    }
    else
    {
        if (i == 2)
            printf("hell");
        else

            printf("earth");
    }
    return 0;
}