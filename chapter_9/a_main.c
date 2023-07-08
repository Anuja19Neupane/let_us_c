// write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers.
// call this function from main() and print the result in main()

#include <stdio.h>
#include <math.h>

int calculateData(int num1, int num2, int num3, int num4, int num5, int *sum_pointer, float *average_pointer, float *stdDev_pointer)
{
    *sum_pointer = num1 + num2 + num3 + num4 + num5;
    *average_pointer = *sum_pointer / 5;
    float average= *average_pointer;
    float num1_dev= pow(num1-average,2);
    float num2_dev= pow(num2-average,2);
    float num3_dev= pow(num3-average,2);
    float num4_dev= pow(num4-average,2);
    float num5_dev= pow(num5-average,2);
    float sum_dev= num1_dev+num2_dev+num3_dev+num4_dev+num5_dev;
    float std= sqrtf(sum_dev/5); // float ko lagi sqrt paxi f hunxa, sqrt is square root of
    *stdDev_pointer=std;

}
int main()
{
    int a=1;
    int b=2;
    int c=3;
    int d=4;
    int e=5;
    int sum=0;
    // int *sum_pointer=&sum;
    float avg=0;
    float stdDEV=0; 
    float result=calculateData(a,b,c,d,e,&sum,&avg,&stdDEV);
    printf("THE DATA ARE: %d \t%f\t%f\n" ,sum,avg,stdDEV);
    return 0;

}
