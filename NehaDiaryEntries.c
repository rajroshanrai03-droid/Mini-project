#include <stdio.h>

int main() {
    int n; // Number of days (exercise times)
    int i; // Loop counter

    // Read the number of days from the first line of input
    if (scanf("%d", &n) != 1) {
        return 1; // Handle input error
    }

    // Declare an array to store all n exercise times
    int times[n];

    // Read all n exercise times from the second line of input
    for (i = 0; i < n; i++) {
        if (scanf("%d", &times[i]) != 1) {
            return 1; // Handle input error
        }
    }

    // Print the exercise times in reverse order
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", times[i]);
    }

    // Print a newline character for clean output after all numbers
    printf("\n");

    return 0;
}

