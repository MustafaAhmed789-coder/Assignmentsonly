// . Write a function that prints all the unique values from an array and the number of times each 
// value occurred. The main function takes a size of array as input and generates a random integer 
// array with name “array1”. Random number limit must be between 0 and 10. The ‘main’ function 
// calls a function with the name as “CountFrequency( )” that will find the occurrence of each value 
// in array.


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 10  // Random numbers will be between 0 and MAX_NUM

void Count(int array[], int size) {
    int counted[MAX_NUM + 1] = {0};  

    printf("\nUnique values and their occurrences:\n");
    for (int i = 0; i < size; i++) {
        int value = array[i];
        if (counted[value] == 0) {  
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (array[j] == value) {
                    count++;
                }
            }
            counted[value] = 1; 
            printf("Value %d occurred %d times\n", value, count);
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array1[size];
    srand(time(0));
    printf("Generated array: ");
    for (int i = 0; i < size; i++) {
        array1[i] = rand() % (MAX_NUM + 1);
        printf("%d ", array1[i]);
    }

    Count(array1, size);

    return 0;
}
