#include <Sparki.h>
 
void setup() {
    delay(3000); // Delay to see "Hello, World!"
    Serial.println("Hello, World!");
    delay(500);
}

void loop() {
    int x = 0; // Do we want x to be local variable? Depends.
    x = x + 1; 
    Serial.print("Hi, x is: ");
    Serial.println(x);
    delay(500);
}

