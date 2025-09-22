#include <stdio.h>   // Include the standard input/output library so we can use printf()

int main() {
    int energy_indicator = 50; // Declare a variable called 'energy_indicator' and give it an initial value of 40

    // Check if the energy_indicator is greater than 50
    if (energy_indicator > 50) {
        printf("Hello, World!\n");  // If the condition is true, print "Hello, World!"
    } else {
        printf("Hello, COMP106!\n"); // If the condition is false, print "Hello, COMP106!"
    }

    return 0;  // End the program and return 0 to the operating system
}