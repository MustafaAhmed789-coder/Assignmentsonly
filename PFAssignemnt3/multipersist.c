#include<stdio.h>

int main(){
    int num,steps = 0,result, mult;
    printf("Enter the number : ");
    scanf("%d", &num);
    while(num > 9){
        mult = 1;
        while(num >  0){
        mult*=  num % 10;
        num = num /10;
        }
        num = mult;
        steps++;
    }
    printf("The Multiplicative Persistance is %d \n", steps);
    printf("The Multiplicative Root is %d ", num);
    return 0;
}