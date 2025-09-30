#include <stdio.h>

void setup() {
    printf("Initialzing hardware...\n");

    int count = 0;
    while (count < 4) {
        printf("While loop iteration %d\n", count);
        count++;
    }

    /* Lines 13–15: for-loop version of lines 6–10 (while-loop) */
    // for (int i = 0; i < 4; i++) {
    //     printf("For loop iteration %d\n", i);
    // }

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