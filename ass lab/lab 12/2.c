// . Write a program that ask the user to enter the total 'N' no of characters in user's name {First 
// Name + Last Name} to create a dynamic array of characters. After create a dynamic array of 
// that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that 
// has already been taken from the user before
// Dynamic Array = "Muhib Ahmed";

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N;

    printf("Enter the total number of characters in your name (First Name + Last Name): ");
    scanf("%d", &N);

    char *fullName = (char *)malloc((N + 1) * sizeof(char));

    if (fullName == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter your full name (First Name + Last Name): ");
    getchar();
    fgets(fullName, N + 1, stdin);

    printf("Your full name is: %s\n", fullName);

    free(fullName);

    return 0;
}

