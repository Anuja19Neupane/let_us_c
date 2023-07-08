//write a function that receives marks received by a student in 3 subjects in and return the average and percentage of these marks.
// call this function from main() and print the results in main()

#include <stdio.h>

void calculateAverageAndPercentage(int marks1, int marks2, int marks3, float *sum,float *average, float *percentage)
{
    *sum=marks1 + marks2 + marks3;
    *average = *sum / 3.0;
    *percentage = (*sum / 300.0) * 100.0;
}

int main()
{
    int marks1, marks2, marks3;
    float average, sum,percentage;

    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    calculateAverageAndPercentage(marks1, marks2, marks3,&sum, &average, &percentage);//function call

    printf("Average Marks: %.2f\n", average);//decimal paxadi duita digit prints
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
