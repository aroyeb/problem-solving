#include <stdio.h>

int main() {
    int marks;
    
    // Prompt user to enter total marks
    printf("Enter total marks obtained by the student: ");
    scanf("%d", &marks);

    // Check the range of marks and assign letter grade
    if (marks >= 80 && marks <= 100) {
        printf("Letter Grade: A\n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Letter Grade: B\n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Letter Grade: C\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Letter Grade: D\n");
    } else if (marks >= 0 && marks <= 49) {
        printf("Letter Grade: F\n");
    } else {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }

    return 0;
}