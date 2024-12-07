#include<stdio.h>
int main(){
// int n;
// printf("Enter the Range");
// scanf("%d", &n);
// //if(n%2==0) n+=1;
// int rem = n/2 + 1;
for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
        if(j == 2 || i == 2 ){
            printf("*");
        }
        else
        {
    printf(" ");
        }
    }
    printf("\n");
}
return 0;
}