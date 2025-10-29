#include <Sparki.h>;

int x = 0;
int direction = 1;
const int STEP = 1;

void setup() {}

void loop() {
  
    sparki.clearLCD();
    
    sparki.drawCircleFilled(x, 32, 10);

    sparki.updateLCD();
    delay(100); 

    // Update x to move the ball
    x = x + direction * STEP;
    if (x == 127) direction = -1;
    else if (x == 0) direction = 1;

}
