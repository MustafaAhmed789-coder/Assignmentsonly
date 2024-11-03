/*Question 4:
Write a C Program to print out all of the factors of a number from 1 to N.
For N = 9, output is 1, 3, 9
For N = 7, output is 1, 7*/

#include<stdio.h>

int main(){
    int num,count = 1,n = 1;
    printf("Enter the number for factor : ");
    scanf("%d", &num);
    printf("THe factors of %d are ",num);
    for(int i = 1; i <= num; i++){
        if(num % count == 0){
            printf("%d ",count);
            if(i+1 <= num)
                printf("& ");
        }
     count ++;
    }
    
    return 0;
}