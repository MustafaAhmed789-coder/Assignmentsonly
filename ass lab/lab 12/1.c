// 1. Write a program that does the following: 
// a. Ask the user to type the size of the array. 
// b. Use malloc or calloc to create an integer array of that size. 
// c. Use the function read to read the numbers. 
// d. Display the sum and average or these numbers. Then display the array sorted. 
//  Show 2 numbers after the floating point in the average. 
// e. Free the allocated memory


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <stdlib.h>

void read(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void sort(int *arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    read(arr, size);

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float)sum / size;

    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    sort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
