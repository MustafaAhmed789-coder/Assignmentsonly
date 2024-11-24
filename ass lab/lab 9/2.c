//  Salesflow is one of leading software house they are starting their recruitment process for three 
// different following positions: Associate Developer, Assistant Developer, Trainee Engineer. There 
// is a defined criterion for recruitment process: if candidate clears the test with 50 marks, he will 
// be selected for the post of trainee engineer; experience is not the required for this post. If 
// candidate secures 60 marks with at least one year of experience and 70 marks with at least 2 
// years of experience, then he/she will be selected as an assistant and associate developer, 
// respectively. Write a function that takes the test marks from user and ask for experience (if the 
// entered marks are x >=60). After that, function shows the assigned position. 

// Name : Mustafa Ahmed Siddiqui
// Class : BCIT F
// Roll No : CT-261

#include <stdio.h>

void DeterminePosition() {
    int marks, experience;

    printf("Candidate test marks: ");
    scanf("%d", &marks);

        if (marks >= 70) {
        printf("how much experience ? (Years): ");
        scanf("%d", &experience);

        if (experience >= 2) {
            printf("you are assigned as associate developer\n");
        } else {
            printf("You have very less experience for eligble of hire\n");
        }
    } else if (marks >= 60) {
        printf("how much experience  ? (Years): ");
        scanf("%d", &experience);

        if (experience >= 1) {
            printf("you are assigned as assistant developer\n");
        } else {
            printf("You have very less experience for eligble of hire\n");
        }
    } else if (marks >= 50) {
        printf("you are assigned as Trainee Engineer\n");
    } else {
        printf("You have very marks for eligble of hire\n");
    }
}

int main(){
    DeterminePosition();
    return 0;
}