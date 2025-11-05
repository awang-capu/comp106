#include <Sparki.h>

const int NUMBER_OF_READINGS = 5;

void setup() {
    delay(3000);
    sparki.clearLCD();
    sparki.println("Hello, world!");
    sparki.updateLCD();
}

float averageFilteredDistance(int number_of_readings) {
    float total = 0;
    for (int i = 0; i < number_of_readings; i++) {
        total += sparki.ping();
    }
    return total/number_of_readings;
}

void loop() {
    sparki.clearLCD();
    sparki.print("The average distance is: ");
    sparki.print(averageFilteredDistance(NUMBER_OF_READINGS));
    sparki.println("cm.");
    sparki.updateLCD();
}
