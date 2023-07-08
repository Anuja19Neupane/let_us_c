// in C there is no operator for exponential.so:
#include <math.h>
#include <stdio.h>
int main()
{
    int a;
    a=pow(3.0,2.0);// pow() works only with real numbers. so use 3.0 instead of 2.0
    printf("%f",a);
    return 0;
}


