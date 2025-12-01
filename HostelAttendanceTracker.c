HOSTEL ATTENDANCE TRACKER 
Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2
#include <stdio.h>

// Define constants for the size of the array
#define STUDENTS 10
#define DAYS 7

int main() {
    // Example attendance data (replace with your actual data if needed)
    // A[i-1][j-1] corresponds to Student i, Day j
    int attendance[STUDENTS][DAYS] = {
        // Day 1 2 3 4 5 6 7 (j+1)
        {1, 1, 0, 1, 1, 1, 0}, // Student 1
        {1, 1, 1, 1, 1, 1, 1}, // Student 2 (Highest Attendance)
        {0, 0, 0, 0, 0, 0, 0}, // Student 3
        {1, 0, 1, 0, 1, 0, 1}, // Student 4
        {1, 1, 1, 0, 0, 0, 0}, // Student 5
        {1, 1, 1, 1, 1, 1, 1}, // Student 6 (Tied for highest, lower number wins)
        {1, 0, 1, 0, 1, 0, 1}, // Student 7
        {1, 1, 1, 1, 1, 1, 0}, // Student 8
        {0, 0, 0, 1, 1, 1, 1}, // Student 9
        {1, 1, 1, 1, 1, 1, 1}  // Student 10
    };

    // --- (a) Calculate and print the total number of days each student was present (Row Sums) ---
    printf("--- (a) Weekly Attendance Summary for Each Student ---\n");
    int student_presents[STUDENTS] = {0}; // Array to store total present days for each student

    for (int i = 0; i < STUDENTS; i++) {
        int present_count = 0;
        for (int j = 0; j < DAYS; j++) {
            present_count += attendance[i][j];
        }
        student_presents[i] = present_count;
        // Student number is i+1
        printf("Student %d was present for %d days.\n", i + 1, present_count);
    }

    // --- (b) Identify the student who has the highest attendance ---
    printf("\n--- (b) Student with the Highest Attendance ---\n");
    int max_attendance = -1;
    int top_student_id = -1; // Stores the 0-based index of the top student

    for (int i = 0; i < STUDENTS; i++) {
        // If current student's attendance is greater than the max found so far, update max
        // The problem states: "If two students have the same highest attendance, print the one with the lower student number."
        // Our loop naturally handles this by iterating from i=0 upwards, so we use '>' not '>='
        if (student_presents[i] > max_attendance) {
            max_attendance = student_presents[i];
            top_student_id = i + 1; // Store 1-based student number
        }
    }
    printf("Student %d has the highest attendance with %d days present.\n", top_student_id, max_attendance);

    // --- (c) Find the day with the lowest overall hostel attendance (Column Sums) ---
    printf("\n--- (c) Day with the Lowest Overall Attendance ---\n");
    int daily_totals[DAYS] = {0};
    int min_attendance_day_total = STUDENTS + 1; // Initialize with a value higher than max possible attendance (10)
    int lowest_attendance_day = -1; // Stores the 1-based day number

    for (int j = 0; j < DAYS; j++) {
        int day_total = 0;
        for (int i = 0; i < STUDENTS; i++) {
            day_total += attendance[i][j];
        }
        daily_totals[j] = day_total;

        // If current day's total is lower than the min found so far, update min
        if (daily_totals[j] < min_attendance_day_total) {
            min_attendance_day_total = daily_totals[j];
            lowest_attendance_day = j + 1; // Store 1-based day number
        }
    }
    printf("Day %d had the lowest overall attendance with %d students present.\n", lowest_attendance_day, min_attendance_day_total);

    return 0;
}

