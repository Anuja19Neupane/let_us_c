// write a program to copy the contents of one array into another in the reverse order.

#include <stdio.h>



int* copyArray(int *array1 ,int *array2,int size) { // *array1 vanera * use garera
                        //  leko xa kinaki it indicates pointer to integers yesko matlab function 
                        // le single integer variable ko adress(array1 ko first element ko address)
                        // recieve garna expect gareko xa
    for (int i = 0; i < size; i++) { 
        array2[i] = array1[size-1 - i]; 
    }
    return array2;
}


int main()
{
     int array1[5];
     int array2[5];

    printf("Enter the elements of first_array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element: ");
        scanf("%d", &array1[i]);
    }
    // result ra array2 are pointing in same location
    int *result = copyArray(array1, array2,5);//function call

    printf("array2 elements in reverse order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
    
}