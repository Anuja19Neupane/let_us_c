// write a recursive c function to obtain the first 25 numbers of fibonacci sequence. 
// in a fibonacci sequence the sum of two sucessive terms gives the third term. 
// follwing are the first few terms of fibonacci sequence:
// 1 1 2 3 5 8 13 21 34 55 89

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("First 25 numbers of the Fibonacci sequence:\n");
    for (int i = 0; i < 25; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
