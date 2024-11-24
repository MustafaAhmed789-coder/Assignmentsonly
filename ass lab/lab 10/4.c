// Define a structure to store the following student data: CGPA, courses (course name, GPA), 
// address (consisting of street address, city, state, zip). Input 2 student records, compare and 
// display which student have highest GPA in which course also Display which student has the 
// highest CGPA . HINT: define another structure to hold the courses and address.


// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <string.h>

struct course {
    char courseName[50];
    float GPA;
};

struct address {
    char street[100];
    char city[50];
    char state[50];
    char zip[10];
};

struct student {
    float CGPA;
    struct course courses[5];
    struct address addr;
};

void inputStudentData(struct student* s) {
    printf("Enter CGPA: ");
    scanf("%f", &s->CGPA);

    for (int i = 0; i < 5; i++) {
        printf("Enter Course %d Name: ", i + 1);
        getchar();
        fgets(s->courses[i].courseName, sizeof(s->courses[i].courseName), stdin);
        s->courses[i].courseName[strcspn(s->courses[i].courseName, "\n")] = '\0';

        printf("Enter GPA for Course %d: ", i + 1);
        scanf("%f", &s->courses[i].GPA);
    }

    printf("Enter Street Address: ");
    getchar();
    fgets(s->addr.street, sizeof(s->addr.street), stdin);
    s->addr.street[strcspn(s->addr.street, "\n")] = '\0';

    printf("Enter City: ");
    fgets(s->addr.city, sizeof(s->addr.city), stdin);
    s->addr.city[strcspn(s->addr.city, "\n")] = '\0';

    printf("Enter State: ");
    fgets(s->addr.state, sizeof(s->addr.state), stdin);
    s->addr.state[strcspn(s->addr.state, "\n")] = '\0';

    printf("Enter Zip: ");
    fgets(s->addr.zip, sizeof(s->addr.zip), stdin);
    s->addr.zip[strcspn(s->addr.zip, "\n")] = '\0';
}

void compareGPA(struct student s1, struct student s2) {
    for (int i = 0; i < 5; i++) {
        if (s1.courses[i].GPA > s2.courses[i].GPA) {
            printf("Student 1 has higher GPA in %s: %.2f vs %.2f\n", s1.courses[i].courseName, s1.courses[i].GPA, s2.courses[i].GPA);
        } else if (s1.courses[i].GPA < s2.courses[i].GPA) {
            printf("Student 2 has higher GPA in %s: %.2f vs %.2f\n", s2.courses[i].courseName, s2.courses[i].GPA, s1.courses[i].GPA);
        } else {
            printf("Both students have equal GPA in %s: %.2f\n", s1.courses[i].courseName, s1.courses[i].GPA);
        }
    }
}

void displayHighestCGPA(struct student s1, struct student s2) {
    if (s1.CGPA > s2.CGPA) {
        printf("Student 1 has the highest CGPA: %.2f\n", s1.CGPA);
    } else if (s1.CGPA < s2.CGPA) {
        printf("Student 2 has the highest CGPA: %.2f\n", s2.CGPA);
    } else {
        printf("Both students have equal CGPA: %.2f\n", s1.CGPA);
    }
}

int main() {
    struct student student1, student2;

    printf("Enter data for Student 1:\n");
    inputStudentData(&student1);

    printf("\nEnter data for Student 2:\n");
    inputStudentData(&student2);

    printf("\nComparing GPA in each course:\n");
    compareGPA(student1, student2);

    printf("\nComparing CGPA:\n");
    displayHighestCGPA(student1, student2);

    return 0;
}
