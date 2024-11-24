// In shopping for a new house, you must consider several factors. In this problem the initial cost 
// of the house, the estimated annual fuel costs, and the annual tax rate are available. Write a 
// program that will determine the total cost of a house after a five-year period and run the 
// program for each of the following sets of data.
// To calculate the house cost, add the initial cost to the fuel cost for five years, then add the 
// taxes for five years. Taxes for one year are computed by multiplying the tax rate by the initial 
// cost. Write and call a function that displays instructions to the program user

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>

void displayInstructions() {
    printf("This program calculates the total cost of a house after a five-year period.\n");
    printf("You need to provide the initial house cost, annual fuel cost, and tax rate.\n");
    printf("The program will calculate the cost based on the given data.\n\n");
}


float calculateTotalCost(float initialCost, float annualFuelCost, float taxRate) {
    float totalFuelCost = annualFuelCost * 5;        
    float annualTax = initialCost * taxRate;        
    float totalTax = annualTax * 5;                  
    return initialCost + totalFuelCost + totalTax;   
}

int main() {

    displayInstructions();

    float initialCost, annualFuelCost, taxRate;

    float data[3][3] = {
        {67000, 2300, 0.025}, 
        {62000, 2500, 0.025}, 
        {75000, 1850, 0.020} 
    };

    for (int i = 0; i < 3; i++) {
        initialCost = data[i][0];
        annualFuelCost = data[i][1];
        taxRate = data[i][2];

        float totalCost = calculateTotalCost(initialCost, annualFuelCost, taxRate);

        printf("House %d:\n", i + 1);
        printf("Initial Cost: $%.2f, Annual Fuel Cost: $%.2f, Tax Rate: %.3f\n", initialCost, annualFuelCost, taxRate);
        printf("Total Cost after 5 years: $%.2f\n\n", totalCost);
    }

    return 0;
}
