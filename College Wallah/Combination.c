#include<stdio.h>
int fact(int n);
int combination(int n, int r);
int permutation(int n, int r);
void print(int Choice,int n,int r);

int fact(int n){
    int result = 1;
    for(int i = 1; i <= n;i++){
        result*=i;
}
return result;
}

int combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int permutation(int n, int r){
        return fact(n)/fact(n-r);
}

void print(int Choice,int n, int r){
    switch(Choice){
        case 1:
            printf("Combination C(%d, %d) = %d\n", n, r, combination(n, r));
            break;
        case 2:
            printf("Permutation P(%d, %d) = %d\n", n, r, permutation(n, r));
            break;
        default:
            printf("Invalid Choice");
            break;
    }
}
int main(){
int n,r;
int Choice;
printf("Enter n & r : ");
scanf("%d %d", &n,&r);
if (n < 0 || r < 0 || r > n) {
        printf("Invalid input: Ensure n >= 0, r >= 0, and r <= n.\n");
        return 1;
    }
printf("Enter the Choice for function\n");
printf("1. Combination.\n2. Permutaion\nEnter the Choice : ");
scanf("%d", &Choice);
print(Choice, n, r);

return 0;
}