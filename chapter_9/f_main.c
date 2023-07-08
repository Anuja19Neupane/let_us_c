// write a function to compute the distance between two points and use it to develop another function 
// that will compute the area
// of the triangle whose vertices are A(x1,y1),B(x2,y2), and C(x3,y3). Use these functions which 
// returns a value 1 if the point (x,y)
// lines inside the triangle ABC,otherwise returns a value 0.


#include <stdio.h>

float distance(float x1, float y1, float x2, float y2) {
    float dist = sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2)); // sqrtf is for squareroot of floating numbers
    return dist;
}