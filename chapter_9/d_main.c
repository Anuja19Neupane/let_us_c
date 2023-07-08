// given three variables x,y,z write a function to circularly shift their values to right. in other words if x=5,=8,z=10,
// after circular shift y=5,z=8,x=10, after circular shift y=5,z=8,x=10.call the function with variables a,b,c to 
// circularly shift values

#include <stdio.h>

int shift(int* x, int* y, int* z) {
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
    return 0;
}

int main() {
    int x, y, z;

    printf("Enter the values of x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before shift: x = %d, y = %d, z = %d\n", x, y, z);

    shift(&x, &y, &z);

    printf("After shift: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
