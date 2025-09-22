#include <stdio.h>
#include <stdlib.h> // Include the standard library to use exit()

// Global variable to track loop iterations
int count = 0;

void setup() {
    printf("Initialzing hardware...\n");
    printf("Setup complete!\n");
    printf("Count in setup: %d\n", count);
}

void loop() {
    if (count < 4) {
        printf("Loop iteration %d\n", count);
        count++;
        printf("Sparki is turning right.\n");
        printf("Sparki is moving forward one meter.\n");
    } else {
        exit(0); // Stop loop() being called by exiting the program
    }
}

int main() {
    printf("Hello Count: %d\n", count);
    setup();    // Initialize hardware, run setup() once
    while(1) {
        loop(); // Keep running your loop() as long as satisfying while loop condition
    }
    return 0;
}