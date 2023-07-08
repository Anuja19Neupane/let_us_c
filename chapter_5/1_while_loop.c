/*while loop is a entry controlled loop which means it's condition is given in entry time not exit*/

#include <stdio.h>
int main()
{
    int p,n,count;
    float r,si;

    count=1;
    while(count<=3)
    {
        printf("\nEnter values of p,n,and r:");
        scanf("%d%d%f",&p,&n,&r);
        si=p*n*r/100;
        printf("simple interest=Rs.%f\n",si);
        // first the simple interest of firstly provided data will be printed then only next input will appear.
        count=count+1;
    }
    return 0;
}
