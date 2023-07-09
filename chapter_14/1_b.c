// wap to pick up the largest number from any 5 row by 5 column matrix.


#include <stdio.h>

int find_largest_number(int matrix[][5]) {
    int largestNumber = matrix[0][0]; // Assume the first element is the largest

    // i lai row consider gareko xa 
    for (int i = 0; i < 5; i++) {
        // j lai column consider gareko xa 
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > largestNumber) {
                largestNumber = matrix[i][j];
            }
        }
    }

    return largestNumber;
}

int main() {
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int largestNum = find_largest_number(matrix); // function call
    printf("The largest number in the matrix is: %d\n", largestNum);

    return 0;
}
