#include <stdio.h> // Include the standard input/output library

// Define a function that prints a greeting with the given id
void greet(int id) {
    printf("Hello, %i!\n", id);
}

int main() {
    int id = 0; // Declare and initialize a variable to store the user’s ID
    printf("Enter your last two digits of the id: \n"); // Prompt the user for input
    scanf("%i", &id); // %i tells scanf to read an integer from the user and store it in 'id'
    // Use & to pass the memory address of 'id' so scanf can save the input there
    greet(id); // Call the greet() function with 'id' as an argument
    return 0;
}
