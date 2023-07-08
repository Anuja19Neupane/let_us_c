// initialize an integer array of 10 elements in main()
// pass the entire array to function modify()
// in modify() multiply each elements of array  by 3
// return the control to main() and print the new array elements in main()

#include <stdio.h>

int* modify(int *array,int *modified_array, int size)
{
    for (int i = 0; i < size; i++)
    {

        modified_array[i]=*(array + i) * 3;
    }
    return modified_array;
}
 void print_array(int *arr, int size){
    printf("[");
    for (int i=0;i<size;i++)
    {
        printf("%d , ",arr[i]);
    }
    printf("]\n");
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int modified_array[10];
    printf("Original array elements:\n");
    print_array(array,10);// function call

    modify(array,modified_array, 10);//function call
    printf("Original array elements:\n");
    print_array(array,10);
    printf("Modified array elements:\n");
    print_array(modified_array,10);
    return 0;
}
