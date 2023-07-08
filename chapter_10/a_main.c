// A 5-digit positive integer is entered through the keyboard,write a recursive and a non-recursive function
// to calculate sum of digits of 5-digit numbers



// recursive
#include <stdio.h>

int recursiveSumOfDigits(int number) {
    if (number == 0) {
        return 0;  // Base case: If the number is 0, return 0
    } else {
        return (number % 10) + recursiveSumOfDigits(number / 10);  // Add the last digit to the sum and recurse with the remaining digits
    }
}

int main() {
    int number;
    printf("Enter a 5-digit positive integer: ");
    scanf("%d", &number);

    int sum = recursiveSumOfDigits(number);

    printf("Sum of digits: %d\n", sum);

    return 0;
}


//non-recursive

#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;       // Remove the last digit from the number
    }

    return sum;
}

int main() {
    int input;
    printf("Enter a 5-digit positive integer: ");
    scanf("%d", &input);

    if (input >= 10000 && input <= 99999) {
        int sum = sumOfDigits(input);
        printf("Sum of digits: %d\n", sum);
    } else {
        printf("Invalid input! \n");
    }

    return 0;
}
