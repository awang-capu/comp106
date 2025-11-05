#include <Sparki.h>

const int EARTH_X = 64;
const int EARTH_Y = 32;
const int DISTANCE = 20; // Assumed distance between moon and earth
float angle = 0; // Global variable to track moon's current orbit angle
 
void setup() {}
void loop() {
    sparki.clearLCD();
    
    // Draw Earth
    sparki.drawCircleFilled(EARTH_X, EARTH_Y, 10);
    
    // Draw Moon
    int moon_x = EARTH_X + DISTANCE * cos(angle);
    int moon_y = EARTH_Y + DISTANCE * sin(angle);
    sparki.drawCircleFilled(moon_x, moon_y, 3); 

    sparki.updateLCD();
    delay(50);

    // Move Moon
    angle += 0.05*PI; 
}
