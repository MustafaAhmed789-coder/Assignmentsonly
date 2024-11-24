// 4. Write a program that takes a positive number with a fractional part and rounds it to two decimal 
// places. For example, 32.4851 would round to 32.49, and 32.4431 would round to 32.44.


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>

int main() {
    float number;

    printf("Enter a positive number with fractional part: ");
    scanf("%f", &number);

    printf("The number rounded to two decimal places is: %.2f\n", number);

    return 0;
}
