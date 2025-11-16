#include <Sparki.h>

float a = -0.1875;
float b = 2.0;

float linearRegression() {
    int x = sparki.ping(); 
    return a * x + b;         // Output y
}

void setup() {}

void loop() {
    float y = linearRegression();

    if (y >= 0) {
        sparki.RGB(RGB_RED);    // Object close (ping() ≤ 10 cm)
    } else {
        sparki.RGB(RGB_GREEN);  // Object far (ping() > 10 cm)
    }
    delay(100);
}
