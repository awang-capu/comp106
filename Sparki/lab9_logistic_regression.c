#include <Sparki.h>
#include <math.h>  // For exp()

// Logistic regression parameters
float w = -1.194;
float b = 12.542;

float logisticRegression(int x) {
    float z = w * x + b;
    float prob = 1.0 / (1.0 + exp(-z));  // Sigmoid
    return prob;                         // Probability
}

void setup() {}

void loop() {
    int distance = sparki.ping();  // Get distance in cm
    float prob = logisticRegression(distance);

    if (prob >= 0.5) {
        sparki.RGB(RGB_RED);    // Object close (y=1)
    } else {
        sparki.RGB(RGB_BLUE);  // Object far (y=0)
    }

    delay(100);
}
