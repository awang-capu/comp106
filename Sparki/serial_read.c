#include <Sparki.h>

void setup() {
    delay(5000); // Delay to be able to see "Hello, World!"
    Serial.println("Hello, World!");
    delay(2000);
}

void loop() {
    int a = Serial.available();
    Serial.print("Serial.available() returns ");
    Serial.println(a);
    if (a > 0) {
        Serial.println((char) Serial.read());
        Serial.print("Serial.available() now returns ");
        Serial.println(Serial.available());
        Serial.println();
    } else {
        Serial.println("I'm bored.");
        Serial.println();
    }
    delay(3000);
    sparki.moveForward(5);
    sparki.moveForward(-5);
}
