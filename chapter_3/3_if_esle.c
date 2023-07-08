// 
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num>29)
    {
        printf ("you printed greater than 29.");
    }
    else{
        printf ("you printed smaller than 29.");
    }
    return 0;
}