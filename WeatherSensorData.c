Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥 Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1
#include <stdio.h>

int main() {
    int n;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int temperature;

    // Read the number of readings
    if (scanf("%d", &n) != 1) {
        return 1; // Handle input error
    }

    // Loop through each reading
    for (int i = 0; i < n; i++) {
        // Read the next temperature
        if (scanf("%d", &temperature) != 1) {
            return 1; // Handle input error
        }

        // Check if the temperature is positive, negative, or zero
        if (temperature > 0) {
            positive_count++;
        } else if (temperature < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    // Print the final counts
    printf("Positive readings: %d\n", positive_count);
    printf("Negative readings: %d\n", negative_count);
    printf("Zero readings: %d\n", zero_count);

    return 0;
}

