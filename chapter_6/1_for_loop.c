/*for loop is also a entry controlled loop which means it's condition is given in entry time not exit*/
// finding simple interest for 3 sets.
#include <stdio.h>
int main()
{
    int principle, time, count;
    float rate, simple_interest;

    for (count = 1; count <= 3; count++)
    {
        printf("Enter the value of principle,time and rate: ");
        scanf("%d%d%f", &principle, &time, &rate);

        simple_interest = principle * time * rate / 100;
        printf("Simple interest is: Rs.%f\n", simple_interest);
    }
    return 0;
}