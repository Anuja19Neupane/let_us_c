// if the length of the sides of a triangle are denoted by a,b and c, then area of triangle are denoted by a,b,c , 
// if the lengths of the sides of a triangle sre denoted by a,b,c, then area of triangle is given by
// area= root under S(S-a)(S-b)(S-c)
// where,S=(a+b+c)/2. write a function to calculate the area of the triangle.
#include <stdio.h>
#include <math.h>

float Area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrtf(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    float side1, side2, side3;
    
    printf("Enter the lengths of the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);
    
    float triangleArea = Area(side1, side2, side3);
    printf("The area of the triangle is: %.2f\n", triangleArea);
    
    return 0;
}
