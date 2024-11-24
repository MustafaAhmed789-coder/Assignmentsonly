// Write the program that calculate the volume by using following formula 
// 𝑉 = 𝑎 2 ∗ 1 /3 ℎ,
// by creating two separate functions. One of the functions with prototype “getData(int h, int a)”, 
// takes two inputs from user. The other function with prototype “volumeCal( )” calculates the 
// volume, and this function must be called from the first function “getData ( )”. The first function 
// must be called from the main function

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261


#include <stdio.h>
float volumeCal(int h, int a) {
    float volume = (a * a) * ((1.0 / 3) * h);
    return volume;
}

void getinfo() {
    int h, a;
    printf("Enter the height: ");
    scanf("%d", &h);
    printf("Enter the side length: ");
    scanf("%d", &a);

    float volume = volumeCal(h, a);
    printf("The calculated volume is: %.2f\n", volume);
}

int main() {
    getinfo();
    return 0;
}
