/*esle if ladder*/
#include <stdio.h>
int main()
{ 
    int m1,m2,m3,m4,m5,sum,percentage;
    sum=m1+m2+m3+m4+m5;
    percentage=sum*100/500;

    if (percentage>=60)
        printf("first division\n");
    else if(percentage>=50)
        printf("second division\n");
    else if(percentage>=40)
        printf("third division\n");
    else
        printf("fail");
    return 0;

}