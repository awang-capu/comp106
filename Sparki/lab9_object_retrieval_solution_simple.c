#include <Sparki.h>

const int BLACK_WHITE_THRESHOLD = 400;
const int UNLOADING_DISTANCE_CM = 8;
const int DETECTION_DISTANCE_CM = 5;
bool object_moving = false;
bool reach_start = false;

void setup(){
    sparki.gripperOpen();
    delay(5000);
    sparki.gripperStop();
    sparki.servo(SERVO_CENTER);
}

void lineFollowing() {
    int lineLeft = sparki.lineLeft();
    int lineCenter = sparki.lineCenter();
    int lineRight = sparki.lineRight();

    if (lineLeft < BLACK_WHITE_THRESHOLD && lineRight < BLACK_WHITE_THRESHOLD) { // START position
      sparki.moveStop();
      reach_start = true;
    } else if (lineLeft < BLACK_WHITE_THRESHOLD) {
        sparki.moveLeft();
        delay(50); // To decrease shaking, but not too much, otherwise left/right stuck
    } else if (lineRight < BLACK_WHITE_THRESHOLD) {
        sparki.moveRight();
        delay(50); // To decrease shaking
    } else if (lineLeft > BLACK_WHITE_THRESHOLD && lineRight > BLACK_WHITE_THRESHOLD && lineCenter < BLACK_WHITE_THRESHOLD) {
        sparki.moveForward();
    }
} // Lab3 - Line Following Using Infrared Sensors

void detectAndGrabObject() {
  int ping_distance = sparki.ping();
  if (ping_distance < DETECTION_DISTANCE_CM && ping_distance != -1) { // Is one ping check accurate enough?
    sparki.moveStop(); 
    sparki.moveForward(DETECTION_DISTANCE_CM - 2);// Make sure closer to the object.
    sparki.moveStop();

    sparki.gripperClose();
    delay(5000);
    sparki.gripperStop();

    object_moving = true; // Object found!
    sparki.moveRight(180);
    sparki.moveForward();
  }
} // Lab2 – Gripper & Ultrasonic Distance Sensor

void putDownObject() {
    sparki.moveForward(UNLOADING_DISTANCE_CM);
    sparki.gripperOpen();
    delay(3000);
    sparki.gripperStop();
    sparki.moveForward(-UNLOADING_DISTANCE_CM);
    sparki.moveRight(180);

    object_moving = false;
    reach_start = false;
}

void loop() {
    lineFollowing();
    if (!object_moving) {
      detectAndGrabObject();
    }
    if (object_moving && reach_start) {
        putDownObject();
    }
}
