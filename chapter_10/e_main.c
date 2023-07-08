// write a recursive c function to obtain the running sum of first sum of first 25 natural numbers. 
#include <stdio.h>

// Recursive function to calculate the running sum of first n natural numbers
int runningSum(int n) {
    if (n == 0) {
        return 0;
    }

    return n + runningSum(n - 1);
}

int main() {
    int n = 25;
    int sum = runningSum(n);

    printf("Running sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}
