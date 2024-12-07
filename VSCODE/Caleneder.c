/*Question 8:
Mr. Bhola is fed-up of giving individual dates as inputs. He wants a complete calendar starting from 1st
January to 31st December for a given year.
Write a C program that takes input as a int in format yyyy.*/
#include<stdio.h>
#include<stdlib.h>
int Isleapyear(int year){
    if ((year%4==0 && year%100==0) || year%400==0)
    return 1;
    }
int StartDay(int year){
    int day = (year + (year - 1)/4 - (year - 1)/100 + (year -1)/400)%7;//zellers algorithm for gregorian calender
    return day;
 }

void printcal(int year){
    int gap = StartDay(year);
    int DayinMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    char *months[] = {"Januray","February","March","April","May","June","July","August","September","October","November","December"};
    
    if(Isleapyear(year))
        DayinMonth[1] = 29;
    for(int month = 0; month < 12; month++){
        printf("\n\n_____________ %s %d _____________\n", months[month], year);
        printf("  SUN  MON  TUE  WED  THU  FRI  SAT\n");

        for (int space = 0; space < gap; space++)
        {
            printf("     ");
        }
        for (int day = 1; day <= DayinMonth[month]; day++) {
            printf("%5d", day);

            if ((gap + day) % 7 == 0) {
                printf("\n");
            }
        }

        gap = (gap + DayinMonth[month]) % 7;
    }
 }

 int main(){
    system("color 4D");
    int year;
    printf("------Enter The Year in YYYY Format------\n");
    scanf("%d", &year);
    printcal(year);
    return 0;
    
 }