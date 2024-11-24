// A phone number, such as (212) 767-8900, can be thought of as having three parts: e.g., the area 
// code (212), the exchange (767), and the number (8900). Write a program that uses a structure 
// to store these three parts of a phone number separately. Call the structure phone. Create two 
// structure variables of type phone. Initialize one, and have the user input a number for the other 
// one. Then display both numbers.
// The interchange might look like this:
// Enter area code: 415
// Enter exchange: 555
// Enter number: 1212
// Then display like below:
// My number is (212) 767-8900
// Your number is (415) 555-1212



// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>

struct phone {
    int areaCode;
    int exchange;
    int number;
};

int main() {
    struct phone myNumber = {212, 767, 8900};
    struct phone yourNumber;

    printf("Enter area code: ");
    scanf("%d", &yourNumber.areaCode);

    printf("Enter exchange: ");
    scanf("%d", &yourNumber.exchange);

    printf("Enter number: ");
    scanf("%d", &yourNumber.number);

    printf("\nMy number is (%d) %d-%d\n", myNumber.areaCode, myNumber.exchange, myNumber.number);
    printf("Your number is (%d) %d-%d\n", yourNumber.areaCode, yourNumber.exchange, yourNumber.number);

    return 0;
}
