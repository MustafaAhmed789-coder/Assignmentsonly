// Write a C program to keep records and perform statistical analysis for a class of 20 students. The 
// information of each student contains ID, Name, Sex, quizzes Scores (2 quizzes per semester), 
// mid-term score, final score, and total score. All the records must be store in the file and you must 
// read the scores <50, <80 and <100 until users selects the end file option

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 20

typedef struct {
    int id;
    char name[50];
    char sex;
    int quiz1;
    int quiz2;
    int midTerm;
    int finalScore;
    int totalScore;
} Student;

void addStudent(Student *student) {
    printf("Enter student ID: ");
    scanf("%d", &student->id);
    getchar(); // To consume the newline character
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0';  // Remove newline character
    printf("Enter student sex (M/F): ");
    scanf(" %c", &student->sex);
    printf("Enter quiz 1 score: ");
    scanf("%d", &student->quiz1);
    printf("Enter quiz 2 score: ");
    scanf("%d", &student->quiz2);
    printf("Enter mid-term score: ");
    scanf("%d", &student->midTerm);
    printf("Enter final score: ");
    scanf("%d", &student->finalScore);

    student->totalScore = student->quiz1 + student->quiz2 + student->midTerm + student->finalScore;
}

void displayStudent(const Student *student) {
    printf("ID: %d, Name: %s, Sex: %c, Total Score: %d\n", student->id, student->name, student->sex, student->totalScore);
}

void saveToFile(Student students[], int count) {
    FILE *file = fopen("student_records.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(students, sizeof(Student), count, file);
    fclose(file);
}

void loadFromFile(Student students[], int *count) {
    FILE *file = fopen("student_records.dat", "rb");
    if (file == NULL) {
        printf("No file found or error opening file.\n");
        return;
    }
    *count = fread(students, sizeof(Student), MAX_STUDENTS, file);
    fclose(file);
}

void displayStatistics(Student students[], int count) {
    printf("\nStudents with scores <50:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].totalScore < 50) {
            displayStudent(&students[i]);
        }
    }

    printf("\nStudents with scores <80:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].totalScore < 80) {
            displayStudent(&students[i]);
        }
    }

    printf("\nStudents with scores <100:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].totalScore < 100) {
            displayStudent(&students[i]);
        }
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;
    
    loadFromFile(students, &studentCount);

    while (1) {
        printf("\n1. Add a new student record\n");
        printf("2. Display all student records\n");
        printf("3. Display students with scores <50, <80, <100\n");
        printf("4. Save records to file\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (studentCount < MAX_STUDENTS) {
                    addStudent(&students[studentCount]);
                    studentCount++;
                } else {
                    printf("Cannot add more students. Maximum limit reached.\n");
                }
                break;

            case 2:
                printf("\nDisplaying all student records:\n");
                for (int i = 0; i < studentCount; i++) {
                    displayStudent(&students[i]);
                }
                break;

            case 3:
                displayStatistics(students, studentCount);
                break;

            case 4:
                saveToFile(students, studentCount);
                printf("Records saved to file.\n");
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
