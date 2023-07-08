//example of nested for loop

#include <stdio.h>
int main()
{
    int num,num_again,sum;
    for(num=1;num<=3;num++)
    {
        for(num_again=1;num_again<=2;num_again++)
        {
            sum=num+num_again;
            printf("r=%d c=%d sum=%d\n",num,num_again,sum);
        }
    }
    return 0;

}