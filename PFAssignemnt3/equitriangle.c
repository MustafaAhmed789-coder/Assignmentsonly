/*Write a C program that prints an equilateral triangle for a given n. For n=3*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the range : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i ; j++){
            printf("*");

        }
        printf("\n");
    }
    for (int k = 1; k <= n-1; k++)
    {
        for(int l = 0; l < n-k ; l++){
            printf("*");
    }
    printf("\n");
    }

    
    return 0;
}