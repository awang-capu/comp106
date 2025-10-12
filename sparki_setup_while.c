#include <stdio.h>

void setup() {
    printf("Initialzing hardware...\n");

    int count = 0;
    while (count < 4) {
        printf("While loop iteration %i\n", count);
        count++;
    }

    printf("Setup complete!\n");
}

void loop() {
    printf("Sparki is turning right 90 degrees.\n");
    printf("Sparki is moving forward 20 cm.\n");
}

int main() {
    setup();    // Initialize hardware, run setup() once
    // while(1) {
    //     loop(); // Keep running loop()
    // }
    return 0;
}