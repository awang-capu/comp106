void setup() {
    delay(5000); // Delay to be able to see "Hello, World!"
    Serial.println("Hello, World!");
    delay(2000);
}

// Prints a right-angled triangle of '*' with the given number of rows
void printRightTriangle(int rows) {
    for (int i = 0; i < rows; i++) { // Loop through each row
        for (int j = 0; j <= i; j++) { // Print '*' i + 1 times
            Serial.print('*');
        }
        Serial.println(); // Move to next line
    }
}

// Prints an isosceles triangle of '*' with the given number of rows.
// An isosceles triangle has at least two sides of equal length.
void printIsoscelesTriangle(int rows) {
    for (int i = 0; i < rows; i++) { // Loop through each row

        // Print leading spaces ' ' rows - (i + 1) times
        for (int j = 0; j < rows - (i + 1); j++) { 
            Serial.print(' ');
        } 

        // Print left and center '*' i + 1 times
        for (int j = 0; j <= i; j++) { 
            Serial.print('*');
        }

        // Print right side '*' i times
        for (int j = 0; j < i; j++) {
            Serial.print('*');
        }
        Serial.println(); // Move to next line
    }
}

void loop() {
    if (Serial.available() > 0) {
        int num_rows = Serial.parseInt();
        Serial.print("Number of rows you entered: ");
        Serial.println(num_rows);
        printRightTriangle(num_rows);
        //printIsoscelesTriangle(num_rows);
    } else {
        Serial.println("I'm bored. Enter the number of rows for me to draw.");
    }
    delay(2000);
}
