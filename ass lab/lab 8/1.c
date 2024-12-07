//1. As a programmer, you are required to create a program that takes the first and last name from 
//a user. The program then combines both the inputs taken and prints the string backwards
// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261
#include<stdio.h>
#include<string.h>
int main(){
char firstname[20], lastname[20],fullname[50];
printf("Enter your first name : ");
scanf("%s", firstname);
printf("Enter your last name : ");
scanf("%s", lastname);\
strcpy(fullname, lastname);
strcat(fullname, " ");
strcat(fullname,firstname);
printf("%s", fullname);
return 0;
}
