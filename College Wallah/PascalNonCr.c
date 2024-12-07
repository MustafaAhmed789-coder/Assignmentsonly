#include<stdio.h>


void pascaltriangle(int n);

// void pascaltriangle(int n){
//     for(int i = 0; i <= n ;i++){
//         int first = 1;
//         for( int j =0 ; j<=i;i++){
//             int first = first *((i-j)/(j+1));
//             printf("%d", first);
//         }
//         printf("\n");
//     }

void pascaltriangle(int n) {
    for (int i = 0; i < n; i++) {
        int value = 1;
        for (int space = 0; space < n - i - 1; space++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%5d  ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }

}
int main(){
pascaltriangle(15);
return 0;
}