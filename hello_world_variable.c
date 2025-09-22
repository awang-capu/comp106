#include <stdio.h>   // Include the standard input/output library so we can use printf()

int main() {
    int energy_indicator = 100; // Declare an integer variable called 'energy_indicator' and set its initial value to 100
    
    // Print the current value of 'energy_indicator'
    // %d is a placeholder for an integer, which is replaced by the value of 'energy_indicator'
    printf("Hello, World!\nMy energy is %i in the morning.\n", energy_indicator);

    // Print the new value of 'energy_indicator'
    energy_indicator = 50; // Change the value of 'energy_indicator' to 50
    printf("My energy was %i at noon.\n", energy_indicator);

    return 0;  // End the program and return 0 to the operating system
}
