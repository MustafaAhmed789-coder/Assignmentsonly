#include<stdio.h>
void pascaltriangle(int n);
int fact(int n);
int combination(int n, int r);


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

void pascaltriangle(int n){

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%3d ", combination(i,j));
        }
        printf("\n");
    }
    

}
int main(){
int n;
printf("Enter the range of the triangle: ");
scanf("%d", &n);

pascaltriangle(n);
return 0;
}