#include <stdio.h>

int main() {
    int n; 
    printf("Enter the total number of students in the class: ");
    scanf("%d", &n);

    int attendance[n]; 
    int present_count = 0;
    int absent_count = 0;

    printf("Enter the attendance for each student (0 or 1, space-separated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &attendance[i]);
        if (attendance[i] == 1) {
            present_count++;
        } else {
            absent_count++;
        }
    }

    printf("Present: %d\n", present_count);
    printf("Absent: %d\n", absent_count);

    return 0;
}