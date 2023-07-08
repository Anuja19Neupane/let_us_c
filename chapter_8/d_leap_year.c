// any year is entered through keyboard. write a function to find out that it is leap year or not.
#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) { // year ma put gareko value ma isLeapYear true xa ki xaina checks.
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
