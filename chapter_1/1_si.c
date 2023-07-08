// calculation of simple interest

 #include <stdio.h>
//int printf(const char *,float);
int main()
{
    int p,n;
    float r,si;
    p=1000;
    n=3;
    r=4.5;
    si=p*n*r/100;
    printf("%f\n",si);
    return 0;

}