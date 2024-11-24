// . You’re the owner of a hardware store and need to keep an inventory that can tell you what tools 
// you have, how many you have and the cost of each one. Write a program that initializes the file 
// "hardware.txt" to 10 empty records, lets you input the data concerning each tool, enables you 
// to list all your tools, lets you delete a record for a tool that you no longer have and lets you 
// update any information in the file. The tool identification number should be the record 
// number. Use the following information to start your file:


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "hardware.txt"
#define MAX_RECORDS 10

typedef struct {
    int recordNum;
    char toolName[30];
    int quantity;
    float cost;
} Tool;

void initializeFile();
void listTools();
void addOrUpdateTool();
void deleteTool();
void updateRecord(int recordNum, const char* name, int quantity, float cost);

int main() {
    int choice;

    initializeFile();

    do {
        printf("\n--- Hardware Store Inventory Management ---\n");
        printf("1. List all tools\n");
        printf("2. Add/Update a tool\n");
        printf("3. Delete a tool\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                listTools();
                break;
            case 2:
                addOrUpdateTool();
                break;
            case 3:
                deleteTool();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void initializeFile() {
    FILE* file = fopen(FILENAME, "r");
    if (file == NULL) {
        file = fopen(FILENAME, "w");
        for (int i = 1; i <= MAX_RECORDS; i++) {
            fprintf(file, "%d,Empty,0,0.00\n", i);
        }
        fclose(file);
        printf("File initialized with 10 empty records.\n");
    } else {
        fclose(file);
    }
}

void listTools() {
    FILE* file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Tool tool;
    printf("\n%-10s %-20s %-10s %-10s\n", "Record #", "Tool Name", "Quantity", "Cost");
    printf("-------------------------------------------------------------\n");

    while (fscanf(file, "%d,%29[^,],%d,%f\n", &tool.recordNum, tool.toolName, &tool.quantity, &tool.cost) != EOF) {
        printf("%-10d %-20s %-10d %-10.2f\n", tool.recordNum, tool.toolName, tool.quantity, tool.cost);
    }

    fclose(file);
}

void addOrUpdateTool() {
    int recordNum;
    char toolName[30];
    int quantity;
    float cost;

    listTools();
    printf("Enter the record number to add/update (1-10): ");
    scanf("%d", &recordNum);

    if (recordNum < 1 || recordNum > MAX_RECORDS) {
        printf("Invalid record number.\n");
        return;
    }

    printf("Enter the tool name: ");
    scanf(" %[^\n]", toolName);
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    printf("Enter the cost: ");
    scanf("%f", &cost);

    updateRecord(recordNum, toolName, quantity, cost);
}

void deleteTool() {
    int recordNum;

    listTools();
    printf("Enter the record number to delete (1-10): ");
    scanf("%d", &recordNum);

    if (recordNum < 1 || recordNum > MAX_RECORDS) {
        printf("Invalid record number.\n");
        return;
    }

    updateRecord(recordNum, "Empty", 0, 0.00);
    printf("Record #%d deleted.\n", recordNum);
}

void updateRecord(int recordNum, const char* name, int quantity, float cost) {
    FILE* file = fopen(FILENAME, "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Tool tool;
    int found = 0;

    while (fscanf(file, "%d,%29[^,],%d,%f\n", &tool.recordNum, tool.toolName, &tool.quantity, &tool.cost) != EOF) {
        if (tool.recordNum == recordNum) {
            fseek(file, -strlen(tool.toolName) - 13, SEEK_CUR);
            fprintf(file, "%d,%s,%d,%.2f\n", recordNum, name, quantity, cost);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Record not found.\n");
    }

    fclose(file);
}
