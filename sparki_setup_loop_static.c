#include <stdio.h>
#include <stdlib.h> // Include the standard library to use exit()

void setup() {
    printf("Initialzing hardware...\n");
    printf("Setup complete!\n");
}

void loop() {
    static int count = 0; // Static variable to track loop iterations
    if (count < 4) {
        printf("Loop iteration %d\n", count);
        count++;
        printf("Sparki is moving forward 20cm.\n");
        printf("Sparki is turning right 90 degrees.\n");
    } else {
        exit(0); // Stop loop() being called by exiting the program
    }
}

int main() {
    setup();    // Initialize hardware, run setup() once
    while(1) {
        loop(); 
    }
    return 0;
}
