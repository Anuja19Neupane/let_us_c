// write a c-program to evaluate the series
// sin(x)= x-(x^3/3!)+(x^5/5!)-(x^7/7!)+.......... upto 10 terms

#include <stdio.h>
#include <math.h>

int evaluate_series(int n)
{
    /*  this function takes a int input x and calculate the value like
      1-3+5-7+9........less than x */
    int value = 0;
    int j = 0;
    for (int i = 1; i <= n; i = i + 2)
    {
        int sign = pow(-1, j);
        value += i * sign;
        j++;
    }
    return value;
}

float convert_degree_to_radian(float degree)
{
    float radian;
    radian = degree * 0.0175;
    return radian;
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

float my_sin(float degree)
{
    float radian = convert_degree_to_radian(degree);
    float value = 0;
    int j = 0;
    for (int i = 1; i <= 10; i = i + 2)
    {
        int sign = pow(-1, j);
        value += sign*(pow(radian, i) / factorial(i));
        j++;
    }
    return value;
}

int main()
{
    int result = evaluate_series(10);
    printf("The result is %d\n", result);
    float value = my_sin(30);
    printf("Desired output is: %f\n",value);
    return 0;
}