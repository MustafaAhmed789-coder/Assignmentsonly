// 3. Students are grouped in two to complete a lab task. Each student is required to enter a string 
// of their own choice as an input to the program. The program will then display as a result 
// whether both the strings are equal. If the strings are not equal, the program will display which 
// of the string is greater.
// Test cases:
// Enter two strings that are same.
// Enter two different strings


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    printf("Group 1 Student ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = '\0';  // Remove newline character

    printf("Group 2 Student ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = '\0';

    // Compare the two strings lexicographically
    int result = strcmp(string1, string2);

    if (result == 0) {
        printf("\nSTrings are equal lexicographically\n");
    } else if (result > 0) {
        printf("\nString 1 ('%s') is greater than String 2 WRT lexicographically.\n", string1);
    } else {
        printf("\nString 2 ('%s') is greater WRT lexicographically.\n", string2);
    }

    // also by length 
    int len1 = strlen(string1);
    int len2 = strlen(string2);

    if (len1 == len2) {
        printf("Both strings length are equal\n");
    } else if (len1 > len2) {
        printf("String 1 ('%s') length is greater\n", string1);
    } else {
        printf("String 2 ('%s') length is greate\n", string2);
    }

    return 0;
}