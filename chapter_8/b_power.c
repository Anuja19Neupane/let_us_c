//write a function power(a,b) to calculate the value of a raised to b



#include <stdio.h>

int power(int a, int b);//power vanney function with datatype int

int main()//main function
{
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);// calling function called power passing base and exponent values as aarguments

    printf("Result: %d\n", result);

    return 0;
}

int power(int a, int b)//function defination
{
    int result = 1;
    int i;

    for (i = 1; i <= b; i++)
    {
        result *= a;
    }

    return result;
}

