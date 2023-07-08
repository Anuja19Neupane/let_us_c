// write a program using pointers to find the smallest number in an array of 25 integers.

#include <stdio.h>

int find_smallest(int *array, int size) {
    int smallest = *array;// first ko element lai sammallest vanera initialize gareko

    for (int i = 1; i < size; i++) {
        if (*(array + i) < smallest) {
            smallest = *(array + i);
        }
    }

    return smallest;
}

int main() {
    int array[25];

    printf("Enter 25 integers:\n");
    for (int i = 0; i < 25; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int smallest = find_smallest(array, 25);

    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
