// 3. Write a program that calculates the sum of all the elements in array using pointer


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261


#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int *ptr = arr; 
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i); 
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
