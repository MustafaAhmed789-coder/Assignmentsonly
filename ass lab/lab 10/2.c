// 2. Take data input from user after declaring a variable of employee type and show the data in 
// proper format on output screen.


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
    struct employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar();

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    getchar();

    printf("Enter Employee Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = '\0';

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Department: %s\n", emp.department);

    return 0;
}
