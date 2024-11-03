/*Write a C Program to print all first N elements of prime numbers series.
For N = 4, output is 2, 3, 5, 7
For N = 6, output is 2, 3, 5, 7, 11, 13*/
#include<stdio.h>
#include<math.h.>
int isPrime(int num) {
    if (num <= 1) return 0;         
    if (num <= 3) return 1;          
    if (num % 2 == 0 || num % 3 == 0) return 0;  

    
    for (int i = 5; i <= sqrt(num) ; i += 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
 int main(){
    int count = 0,num,n = 0;
    printf("Enter the range of prime number : ");
    scanf("%d", &n);
        printf("The %d Prime numbers are ",n);
    while (count < n){
        if(isPrime(num)){
        printf("%d ",num);
        count ++;
                    }
        num ++;
    }
    return 0;
 }
