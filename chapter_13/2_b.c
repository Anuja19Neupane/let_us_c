// if an array arr contains n elements, then write a program to check if arr[0]=arr[n-1],arr[1]=arr[n-2] and soon
#include <stdio.h>
#include <stdbool.h> // bool datatype ko lagi jasle boolean represent garxa and says true or false

bool isReverse(int arr[], int n) { // arr[]=*arr tara arr[] ma limitations xa
    for (int i = 0; i < n / 2; i++) { // agadi ko aadhi samma check garxa ani paxadi ko aadhi samma compare garxa
        if (arr[i] != arr[n - 1 - i]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bool result = isReverse(arr, n);

    if (result) {
        printf("The array is a reverse.\n");
    } else {
        printf("The array is not a reverse.\n");
    }

    return 0;
}
