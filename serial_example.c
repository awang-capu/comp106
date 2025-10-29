#include <Sparki.h>

int x = 0;
 
void setup() {
    Serial.begin(9600);   // Initialize serial communication
    delay(3000);  // Small delay to let serial connection settle
    
    Serial.println("Hello, World!");
    delay(500);
}

void loop() {
    int distance = sparki.ping();
//  Serial.println("Hi!");
//  Serial.print("distance is: ");
//  Serial.println(distance);
//  delay(500);

 
    x = x + 1;

    Serial.print("Hi, x is: ");
    Serial.println(x);
    delay(500);
  
    sparki.clearLCD();
    sparki.print("The distance from the obstacle is: ");
    sparki.print(distance);
    sparki.println("cm.");
    sparki.updateLCD();
}
