#include<stdio.h>
int main(){
int n;
printf("Enter the Range");
scanf("%d", &n);
if(n%2==0) n+=1;
int rem = n/2;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        if(j == rem || i == rem ){
            printf("* ");
        }
        else
        {
    printf("  ");
        }
    }
    printf("\n");
}
return 0;
}