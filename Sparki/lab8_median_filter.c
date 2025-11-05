#include <Sparki.h>

const int NUMBER_OF_READINGS = 5;

void setup() {
    delay(5000);
    sparki.clearLCD();
    sparki.println("Hello, I am LCD!");
    sparki.updateLCD();

    Serial.println("Hello, I am Serial Monitor!");
}

void sortArray(int arr[], int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
} // No need to understand this sorting algorithm.

int medianFilteredDistance(int number_of_readings) {
    int distances[number_of_readings];
    for (int i = 0; i < number_of_readings; i++) {
        distances[i] = sparki.ping();
    }
    
    Serial.println("5 Readings before sorting:"); 
    for (int i = 0; i < number_of_readings; i++) {
        Serial.print(distances[i]);
        Serial.print(' ');
        delay(500);
    }
    Serial.println(); // This prints data to Serial so you can see what’s happening.
    
    sortArray(distances, number_of_readings);
    
    Serial.println("After sorting:"); 
    for (int i = 0; i < number_of_readings; i++) {
        Serial.print(distances[i]);
        Serial.print(' ');
        delay(500);
    }
    Serial.println(); // This prints data to Serial so you can see what’s happening.
    
    return distances[number_of_readings/2];
}

void loop() {
    sparki.clearLCD();
    sparki.print("The median distance is: ");
    sparki.print(medianFilteredDistance(NUMBER_OF_READINGS));
    sparki.println("cm.");
    sparki.updateLCD();
}
