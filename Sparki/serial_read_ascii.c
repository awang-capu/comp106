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

void loop() {
    if (Serial.available() > 0) {
        int my_char_dec = Serial.read();

        Serial.print("Serial read returns input char's ASCII decimal value: ");
        Serial.println(my_char_dec);

        char my_char = (char) my_char_dec;
        int num_rows = my_char - '0'; // To get the single-digit integer number
        Serial.print("Number of rows you entered: ");
        Serial.println(num_rows);
        printRightTriangle(num_rows);
    } else {
        Serial.println("I'm bored. Enter the number of rows for me to draw.");
    }
    delay(5000);
}
