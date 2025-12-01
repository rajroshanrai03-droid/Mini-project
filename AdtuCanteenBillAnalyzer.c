**Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3
#include <stdio.h>

int main() {
    int n, m;

    // 1. Read input: number of students (n) and number of days (m)
    printf("Enter the number of students (n) and number of days (m): ");
    if (scanf("%d %d", &n, &m) != 2) {
        printf("Invalid input for n and m.\n");
        return 1;
    }

    // Declare the 2D array (VLA feature)
    int bill[n][m];

    printf("Enter the daily bill amounts for %d students over %d days:\n", n, m);
    // Read the bill amounts into the 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    printf("\n--- Results ---\n");

    // 2. Print the total amount spent by each student
    int max_total_spent = -1;
    // Arrays to store student totals and the indices of top spenders (can be multiple)
    int student_totals[n];

    printf("Total amount spent by each student:\n");
    for (int i = 0; i < n; i++) {
        int current_student_total = 0;
        for (int j = 0; j < m; j++) {
            current_student_total += bill[i][j];
        }
        student_totals[i] = current_student_total;
        printf("Student %d: %d\n", i + 1, current_student_total);

        if (current_student_total > max_total_spent) {
            max_total_spent = current_student_total;
        }
    }

    // 3. Find the day with the highest total collection
    int max_day_collection = -1;
    int best_day_index = -1;

    for (int j = 0; j < m; j++) { // Loop through days (columns)
        int current_day_total = 0;
        for (int i = 0; i < n; i++) { // Loop through students (rows)
            current_day_total += bill[i][j];
        }
        if (current_day_total > max_day_collection) {
            max_day_collection = current_day_total;
            best_day_index = j;
        }
    }
    printf("\nDay with the highest total collection: Day %d (Total: %d)\n", best_day_index + 1, max_day_collection);

    // 4. Identify the student(s) who spent the most overall
    printf("\nStudent(s) who spent the most overall (Total: %d):\n", max_total_spent);
    for (int i = 0; i < n; i++) {
        if (student_totals[i] == max_total_spent) {
            printf("Student %d\n", i + 1);
        }
    }

    return 0;
}

