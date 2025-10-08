#include <sparki.h>

int distance = 0; // distance is the global variable to record the distance to the right black line

bool find_black_line() { 
    // Think about which condition satisfied to return true, otherwise return false
    return false;
}

int find_distance() {
    // Use Accumulator algorithm to find the distance to the right black line
    return 3;
}

void check_intruder() { } // You may need to implement this function at a later stage

void forward(int dist) { } // You may need to implement this function at a later stage

void setup() {
    distance = find_distance();
    sparki.moveBackward(distance);
}

void loop() { // Firstly, think about Sparki's moving pattern, similar to drawing a square, but more complex.
    int step = 3; // Local variable that stores the step size (cm) for moving up or down

    sparki.moveForward(distance); // You may need to call your own forward function at a later stage.
    sparki.moveRight(90);
    sparki.moveForward(step);
    if (find_black_line()) {
        sparki.moveBackward(step);
        /*
        Fill out the next steps
        */
    }
    sparki.moveRight(90);

    /*
    Fill out the next steps
    */
}
