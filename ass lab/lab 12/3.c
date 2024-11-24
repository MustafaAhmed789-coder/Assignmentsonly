// 3. Using above question (2), resize that dynamic array of character and append the array with 
// your studentId. That student id must be taken input from the user.
// DynamicArray = "Muhib Ahmed"; // Before
//  DynamicArray = "K211234 Muhib Ahmed"; // After the text append

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N;
    char studentId[20];

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

    printf("Enter your student ID: ");
    fgets(studentId, sizeof(studentId), stdin);
    studentId[strcspn(studentId, "\n")] = '\0';

    int newSize = N + strlen(studentId) + 2;
    fullName = (char *)realloc(fullName, newSize * sizeof(char));

    if (fullName == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    strcat(fullName, " ");
    strcat(fullName, studentId);

    printf("Dynamic Array after appending Student ID: %s\n", fullName);

    free(fullName);

    return 0;
}
