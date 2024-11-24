// 2. Each student is required to find out the maximum frequency of characters occurring in their 
// name and the courses offered in Fall 2021. To find it, the student enters their name, courses 
// offered and the program finds the maximum occurrences of a character in the name and course. 
// Course names should be used like Programming Fundamentals, Applied Physics, Pakistan Studies 
// and so on
// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>
#include <string.h>

int main() {
    char name[100], courses[200];
    int maxFreqName = 0, maxFreqCourses = 0;

    
    printf("NAME : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; 

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') { 
            int count = 0;
            for (int j = 0; name[j] != '\0'; j++) {
                if (name[i] == name[j]) {
                    count++;
                }
            }
            if (count > maxFreqName) {
                maxFreqName = count;
            }
        }
    }
    printf("Courses (comma-separated): ");
    fgets(courses, sizeof(courses), stdin);
    courses[strcspn(courses, "\n")] = '\0';

    for (int i = 0; courses[i] != '\0'; i++) {
        if (courses[i] != ' ') {
            int count = 0;
            for (int j = 0; courses[j] != '\0'; j++) {
                if (courses[i] == courses[j]) {
                    count++;
                }
            }
            if (count > maxFreqCourses) {
                maxFreqCourses = count;
            }
        }
    }

    printf("\nName character  maximum frequency: %d\n", maxFreqName);
    printf("Course name character maximum frequency: %d\n", maxFreqCourses);

    return 0;
}
