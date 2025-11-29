#include <stdio.h>

int main() {
    // Define subjects
    const char* subjects[] = {"Mathematics", "Physics", "Computer Science"};
    int marks[5][3];
    int highest_marks[3] = {0, 0, 0}; // Initialize highest marks to 0

    printf("Enter marks of 5 students in 3 subjects:\n\n");

    // Loop to read marks for each student
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);

            // Check if current mark is the highest for the subject
            if (marks[i][j] > highest_marks[j]) {
                highest_marks[j] = marks[i][j];
            }
        }
    }

    printf("\n");

    // Print the highest marks for each subject in the specified format
    printf("Highest marks in Mathematics: %d\n", highest_marks[0]);
    printf("Highest marks in Physics: %d\n", highest_marks[1]);
    printf("Highest marks in Computer Science: %d in c\n", highest_marks[2]);

    return 0;
}
