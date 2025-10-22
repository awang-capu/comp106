#include <Sparki.h> // Include the sparki library

const int BACKWARD_DISTANCE = 5;
const int ANGLE = 20;
const int THRESHOLD = 200; // If below this value, no surface underneath

void setup() {}

void avoidEdge() {
    int edge_left   = sparki.edgeLeft();   // Measure the left edge IR sensor
    int edge_right  = sparki.edgeRight();  // Measure the right edge IR sensor
    if (edge_left < THRESHOLD) { // If no surface underneath left sensor
        sparki.moveBackward(BACKWARD_DISTANCE);
        sparki.moveRight(ANGLE); 
    } else if (edge_right < THRESHOLD) { // If no surface underneath right sensor
        sparki.moveBackward(BACKWARD_DISTANCE);
        sparki.moveLeft(ANGLE);
    }
}

void avoidWall() {
    int dist_cm = sparki.ping(); // Measures the distance with Sparki's eyes
    if(dist_cm != -1 && dist_cm < 20) {
        sparki.RGB(RGB_RED); 
        sparki.beep(); 
        sparki.moveBackward(10);
        sparki.moveRight(30);
        delay(1000);
    }
}

void loop() {
    sparki.RGB(RGB_GREEN); // Turn the light green

    avoidEdge();

    avoidWall();

    sparki.moveForward();
    delay(100);
}
