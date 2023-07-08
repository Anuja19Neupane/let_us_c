// wap that converts a string like "124" to an  integer 124.
#include <stdio.h>
int main()
{
    char str[] = "124";
    int num;

    num = atoi(str); // atoi is a library function which is  used to convert the string str to an integer.
                     // atoi stands for "ASCII to integer.

    printf("The integer value : %d\n", num);

    return 0;
}