// Write a program to take input from user and save that text in a file as encrypted text (using 
// Shift cipher along with K=3). Then retrieve the encrypted text from the same file and display 
// the original text.

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';
        }
    }
}

void decrypt(char *text, int key) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' - key + 26) % 26) + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' - key + 26) % 26) + 'A';
        }
    }
}

int main() {
    char text[1000];
    int key = 3;
    FILE *file;

    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);

    encrypt(text, key);

    file = fopen("encrypted_text.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("Encrypted text saved in file.\n");

    file = fopen("encrypted_text.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char encryptedText[1000];
    fgets(encryptedText, sizeof(encryptedText), file);
    fclose(file);

    printf("Encrypted text: %s\n", encryptedText);

    decrypt(encryptedText, key);

    printf("Decrypted text (Original): %s\n", encryptedText);

    return 0;
}
