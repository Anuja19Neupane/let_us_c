//write a general purpose function to convert any given year into its roman equivalent.1-I,5-V,10-X,50-L,100-C,500-D,1000-M.
 #include <stdio.h>

int convertToRoman(int year); //function declaration

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    int result = convertToRoman(year);//function call

    if (result == -1) {
        printf("Invalid year.\n");
    } else {
        printf("Roman number representation: %d\n", result);
    }

    return 0;
}

int convertToRoman(int year) { //function defination
    if (year <= 0) {
        return -1;
    }

    int romanNumeral = 0;

    while (year >= 1000) {
        printf("M");
        romanNumeral += 1000;
        year -= 1000;
    }

    while (year >= 900) {
        printf("CM");
        romanNumeral += 900;
        year -= 900;
    }

    while (year >= 500) {
        printf("D");
        romanNumeral += 500;
        year -= 500;
    }

    while (year >= 400) {
        printf("CD");
        romanNumeral += 400;
        year -= 400;
    }

    while (year >= 100) {
        printf("C");
        romanNumeral += 100;
        year -= 100;
    }

    while (year >= 90) {
        printf("XC");
        romanNumeral += 90;
        year -= 90;
    }

    while (year >= 50) {
        printf("L");
        romanNumeral += 50;
        year -= 50;
    }

    while (year >= 40) {
        printf("XL");
        romanNumeral += 40;
        year -= 40;
    }

    while (year >= 10) {
        printf("X");
        romanNumeral += 10;
        year -= 10;
    }

    while (year >= 9) {
        printf("IX");
        romanNumeral += 9;
        year -= 9;
    }

    while (year >= 5) {
        printf("V");
        romanNumeral += 5;
        year -= 5;
    }

    while (year >= 4) {
        printf("IV");
        romanNumeral += 4;
        year -= 4;
    }

    while (year >= 1) {
        printf("I");
        romanNumeral += 1;
        year -= 1;
    }

    printf("\n");

    return romanNumeral;
}
