#include <stdio.h>

void setup() {
    printf("Initialzing hardware...\n");
    printf("Setup complete!\n");
}

void loop() {
    printf("Sparki is turning right.\n");
    printf("Sparki is moving forward one meter.\n");
}

int main() {
    setup();    // Initialize hardware, run setup() once
    while(1) {
        loop(); // Keep running loop()
    }
    return 0;
}