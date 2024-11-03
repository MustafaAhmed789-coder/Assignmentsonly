/*Question 5:
Write a C Program to calculate the power of a number, given the number and the exponent.
Example: Enter Number: 2 Enter Power: 4 Result: 16*/

#include<stdio.h>

int main(){
    int base,pwr,result = 1;
    printf("Enter Number: ");
    scanf("%d", &base);
    printf("Enter Power: ");
    scanf("%d", &pwr);
    for (int i = 0; i < pwr; i++)
    {
        result *= base;
    }
    printf("The Result is %d ", result);
    return 0;
}