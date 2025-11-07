void setup() {
    delay(5000); // Delay to be able to see "Hello, World!"
    Serial.println("Hello, World!");
    delay(2000);
}

int num_rows = 5;
int row = 0;

void loop() {
    if (row < num_rows) {
        for (int i = 0; i <= row; i++) { // Print each row
            Serial.print('*');
        }
        Serial.println();
        row++;
    } else {
        Serial.println("My drawing is done!");
    }
    delay(5000);
}
