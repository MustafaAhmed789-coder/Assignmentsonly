/*Write a program to count and print the number of small letters, capital letters, vowels and spaces in a
sentence. It also prints the total length of the sentence. User can enter a full stop “.” To terminate the
sentence. If the user enters any characters other than space or alphabets, it should not be displayed on
the screen. (Hint: You may have to use getch( ) instead of getche( ) for the input)*/

/*
#include <conio.h>
#include <stdio.h>

int main() {
    char ch;
    while(1){
        if(ch == '.')
            break;

    }
    printf("Press any key: ");
    ch = getch(); // character input hota hai aur screen par show bhi hota hai
    printf("\nYou pressed: %c", ch);
    return 0;
}*/
            
            
#include <stdio.h>
#include <conio.h>

int main() {
    char ch;
    int salpha = 0, lalpha = 0, vow = 0, sp = 0, len = 0;

    printf("Enter a sentence (end with a '.'): ");

    while (1) {
        ch = getch();

        if (ch == '.') 
            break;
    
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == ' ') {
            putchar(ch);
            len++;
            if (ch >= 'a' && ch <= 'z') {
                salpha++;
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vow++;
                }
            }
            else if (ch >= 'A' && ch <= 'Z') {
                lalpha++;
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    vow++;
                }
            }
            else if (ch == ' ') 
                sp++;       
        }
    }
    printf("\nNumber of small letters: %d\n", salpha);
    printf("Number of capital letters: %d\n", lalpha);
    printf("Number of vowels: %d\n", vow);
    printf("Number of spaces: %d\n", sp);
    printf("Total length of the sentence: %d\n", len);
    return 0;
}
