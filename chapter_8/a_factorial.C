// write a function to calculate the factorial value of any integer entered through the keyboard.
#include <stdio.h>

int factorial(int n); // Function prototype declaration

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int result = factorial(num); // Function call
    
    printf("Factorial is: %d\n", result);
    return 0;
}

int factorial(int n) // Function definition
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}




    
 