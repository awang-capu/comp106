#include <Sparki.h>

const int NUMBER_OF_READINGS = 5;

void setup() {
    delay(5000);
    sparki.clearLCD();
    sparki.println("Hello, I am LCD!");
    sparki.updateLCD();

    Serial.println("Hello, I am Serial Monitor!");
}

float averageFilteredDistance(int distances[], int number_of_readings) {
    // Implement your code here
    return 0;
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
}

int medianFilteredDistance(int distances[], int number_of_readings) {

    Serial.println("5 Readings before sorting:"); 
    for (int i = 0; i < number_of_readings; i++) {
        Serial.print(distances[i]);
        Serial.print(' ');
        delay(500);
    }
    Serial.println();
    
    sortArray(distances, number_of_readings);
    
    Serial.println("After sorting:"); 
    for (int i = 0; i < number_of_readings; i++) {
        Serial.print(distances[i]);
        Serial.print(' ');
        delay(500);
    }
    Serial.println();
    
    return distances[number_of_readings/2];
}

void loop() {
    int distances[NUMBER_OF_READINGS];
    for (int i = 0; i < NUMBER_OF_READINGS; i++) {
        distances[i] = sparki.ping();
    }
    
    sparki.clearLCD();
    
    sparki.print("The average distance is: ");
    sparki.print(averageFilteredDistance(distances, NUMBER_OF_READINGS));
    sparki.println("cm.");
    sparki.println();
    
    sparki.print("The median distance is: ");
    sparki.print(medianFilteredDistance(distances, NUMBER_OF_READINGS));
    sparki.println("cm.");

    sparki.updateLCD();

    delay(2000);
}
