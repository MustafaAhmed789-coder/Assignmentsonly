// 1. Declare a structure named employee that stores the employee id, name, salary and 
// department.

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261


#include <stdio.h>
struct employee {
    int id;
    char name[50];
    float salary;      
    char department[30];
};

int main() {
    struct employee emp1;

    emp1.id = 101;
    snprintf(emp1.name, sizeof(emp1.name), "Mustafa Ahmed ");
    emp1.salary = 50000.00;
    snprintf(emp1.department, sizeof(emp1.department), "IT");

    printf("Employee Details:\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Department: %s\n", emp1.department);

    return 0;
}
