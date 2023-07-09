#include <stdio.h>
#include <math.h>

float sum_arr(float *arr, int n)
{
    int i;
    float sum = 0.0f;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// receives two array of equal size and returns product of sum of their elements
float product_sum(float *arr1, float *arr2, int n)
{
    float sum = 0.0f;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += arr1[i] * arr2[i];
    }
    return sum;
}

int main()
{
    float x[5] = {2, 3, 4, 5, 6};
    float y[5] = {1, 2, 3, 4, 5};
    float numerator = product_sum(x, y, 5) - sum_arr(x, 5) * sum_arr(y, 5);
    float denominator = (5 * product_sum(x, x, 5) - sum_arr(x, 5) * sum_arr(x, 5)) * (5 * product_sum(y, y, 5) - sum_arr(y, 5) * sum_arr(y, 5));
    denominator = sqrt(denominator);
    float r = numerator / denominator;
    printf("r = %f\n", r);
}