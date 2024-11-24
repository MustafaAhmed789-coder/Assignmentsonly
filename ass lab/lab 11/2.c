//  Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To 
// implement this, you need to write a function called swaped(). 
// void swaped(int *aPtr, int *bPtr, int *cPtr);
// such that; b ----> temp
//  a ----> b
//  c ----> a 
//  temp -> a

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261


#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr) {
    int temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}

int main() {
    int a, b, c;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);

    printf("\nBefore Swap:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    swaped(&a, &b, &c);

    printf("\nAfter Swap:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
