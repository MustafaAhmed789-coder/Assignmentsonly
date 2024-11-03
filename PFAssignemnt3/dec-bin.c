#include <stdio.h>

void printBinary(int n) {
    for (int i = 0; i < n; i++) {
        int num = i;
        int binary[32];
        int index = 0;
        if(num == 0)
            binary[index++] = 0;

        while (num > 0) {
            binary[index++] = num % 2;
            num /= 2;
        }
        printf("%d in binary is ", i);
        for (int j = index - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter The range : ");
    scanf("%d", &n);
    printBinary(n);
    return 0;
}