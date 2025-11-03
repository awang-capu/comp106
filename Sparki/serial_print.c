#include <Sparki.h>

void setup() {
    delay(3000); // Delay to be able to see "Hello, World!"
    Serial.println("Hello, World!");
    delay(500);
}

void loop() {
    int distance = sparki.ping();
    Serial.print("Hi, distance is: ");
    Serial.println(distance);
    delay(500);

    sparki.clearLCD();
    sparki.print("The distance from the obstacle is: ");
    sparki.print(distance);
    sparki.println("cm.");
    sparki.updateLCD();
}
